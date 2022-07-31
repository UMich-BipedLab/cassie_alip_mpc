#include "Cassie_Fp_Controller.hpp"

/* PUBLIC */

// Constructor
Cassie_Fp_Controller::Cassie_Fp_Controller(std::string &horizon, std::string &intervals)
{
    // Casadi function definitions
    N_steps_ = std::stoi(horizon);
    N_xsol_ = n_xlip_ * N_steps_;
    N_ufpsol_ = n_ufp_ * N_steps_;

    solver_LS_ = "cassie_LS_simplempc_Ns" + horizon + "_Ni" + intervals + "_qrqp";
    f_solver_LS_ = casadi::external(solver_LS_);

    solver_RS_ = "cassie_RS_simplempc_Ns" + horizon + "_Ni" + intervals + "_qrqp";
    f_solver_RS_ = casadi::external(solver_RS_);

    // std::cout << "--> Casadi Solvers Generated\n";

    // Initialize terrain deques
    N_steps_ = std::stoi(horizon);
    for (int i = 0; i < N_steps_; i++)
    {
        kx_traj_.push_back(kx_init_);
        ky_traj_.push_back(ky_init_);
        mux_traj_.push_back(mu_init_);
        muy_traj_.push_back(mu_init_);
    }
}

// Destructor
Cassie_Fp_Controller::~Cassie_Fp_Controller() {}

// Update
void Cassie_Fp_Controller::Update_(const slrt_to_linux_data_t &slrt_to_linux_update,
                                   linux_to_slrt_data_t &linux_to_slrt_update)
{
    // Extract inputs
    time_cassie_ = slrt_to_linux_update.time;
    s_ = slrt_to_linux_update.s;

    x_lip_current_.assign(slrt_to_linux_update.xlip_current, slrt_to_linux_update.xlip_current + 4);
    stance_leg_ = slrt_to_linux_update.stance_leg; // -1 -> left stance
    zH_ = slrt_to_linux_update.zH;
    Ts_ = slrt_to_linux_update.Ts;
    Tr_ = slrt_to_linux_update.Tr;
    leg_width_ = slrt_to_linux_update.leg_width;
    Lx_offset_ = slrt_to_linux_update.Lx_offset;
    Ly_des_ = slrt_to_linux_update.Ly_des;
    kx_new_ = slrt_to_linux_update.kx;
    ky_new_ = slrt_to_linux_update.ky;
    mu_new_ = slrt_to_linux_update.mu;
    if (mu_new_ < 0.05)
    {
        mu_new_ = mux_traj_.back(); // incase udp cuts out just use previous mu
    }

    // Set Opt parameters: p_x_init, p_stanceLeg, p_m, p_zH, p_Ts, p_Tr, p_leg_width, p_Lx_offset, p_Ly_des, p_ufp_max,p_ufp_min, p_k, p_mu, p_Q_term
    // std::vector<double> xlip_init = {xc_this_, yc_this_, Lx_this_, Ly_this_};   // x_init is 4 x 1
    std::vector<double> ufp_max = {ufp_x_max / 2, ufp_y_max_};  // Max distance of step length x
    std::vector<double> ufp_min = {-ufp_x_max / 2, ufp_y_min_}; // Max distance of step length y

    // Update Terrain traj parameters
    if (true)
    {
        kx_traj_.assign(N_steps_, kx_new_);
        ky_traj_.assign(N_steps_, ky_new_);
        mux_traj_.assign(N_steps_, mu_new_);
        muy_traj_.assign(N_steps_, 0.6);
    }
    else
    {
        if (s_ > 0.01 && (leg_identity_ == stance_leg_))
        {
            kx_traj_.push_back(kx_new_);
            kx_traj_.pop_front();

            ky_traj_.push_back(ky_new_);
            ky_traj_.pop_front();

            mux_traj_.push_back(mu_new_);
            mux_traj_.pop_front();

            muy_traj_.push_back(0.6); // dont constrain lateral slip
            muy_traj_.pop_front();

            leg_identity_ = leg_identity_ * -1;
            ;
        }
    }

    /* Convert terrain vectors to casadi matrix objects */
    casadi::Matrix<double> k_traj(n_ufp_, N_steps_);
    casadi::Matrix<double> mu_traj(n_ufp_, N_steps_);
    for (int i = 0; i < n_ufp_; i++)
    {
        for (int j = 0; j < N_steps_; j++)
        {
            if (i == 0) // x-component
            {
                k_traj(i, j) = kx_traj_[j];
                mu_traj(i, j) = mux_traj_[j];
            }
            else // y-component
            {
                k_traj(i, j) = ky_traj_[j];
                mu_traj(i, j) = muy_traj_[j];
            }
        }
    }

    /* Terminal cost parameter */
    casadi::DM Q_term = casadi::DM::eye(n_xlip_);
    Q_term *= 100;

    /* MPC Solution */
    double ufp_x_sol, ufp_y_sol;
    double xfp, yfp;
    if (stance_leg_ == -1) // left stance
    {

        casadi::Matrix<double> xlip_guess(n_xlip_, N_steps_);
        casadi::Matrix<double> ufp_guess(n_ufp_, N_steps_);
        // Initial guess for warm start
        if (iter_ > 0)
        {
            casadi::Matrix<double> xlip_guess = reshape(casadi::Matrix<double>(xlip_guess_), n_xlip_, N_steps_);
            casadi::Matrix<double> ufp_guess = reshape(casadi::Matrix<double>(ufp_guess_), n_ufp_, N_steps_);
        }

        // Solve optimization problem
        std::vector<casadi::DM> arg = {xlip_guess, ufp_guess, x_lip_current_, stance_leg_, mass_, zH_, Ts_, Tr_, leg_width_, Lx_offset_, Ly_des_, ufp_max, ufp_min, k_traj, mu_traj, Q_term};
        std::vector<casadi::DM> result_solver;

        result_solver = f_solver_LS_(arg);

        std::vector<double> xlip_sol = (std::vector<double>)result_solver.at(0);
        std::vector<double> ufp_sol = (std::vector<double>)result_solver.at(1);
        ufp_x_sol = ufp_sol[0];
        ufp_y_sol = ufp_sol[1];

        // Safety check for bad solutions
        // median of ufpxsol and limits
        std::vector<double> ufpx_check{ufp_x_sol, ufp_max[0], ufp_min[0]};
        auto m = ufpx_check.begin() + ufpx_check.size() / 2;
        std::nth_element(ufpx_check.begin(), m, ufpx_check.end());
        ufp_x_sol = ufpx_check[ufpx_check.size() / 2];
        // median of ufpysol and limits
        // std::cout << "stanceleg: " << stance_leg_ << "\n";
        if (stance_leg_ == -1) // left stance
        {
            std::vector<double> ufpy_check{-ufp_max[1], ufp_y_sol, -ufp_min[1]};
            // std::cout << "median vector: " << ufpy_check << "\n";
            auto l = ufpy_check.begin() + ufpy_check.size() / 2;
            std::nth_element(ufpy_check.begin(), l, ufpy_check.end());
            ufp_y_sol = ufpy_check[ufpy_check.size() / 2];
        }
        else // right stance
        {
            std::vector<double> ufpy_check{ufp_min[1], ufp_y_sol, ufp_max[1]};
            // std::cout << "median vector: " << ufpy_check << "\n";
            auto l = ufpy_check.begin() + ufpy_check.size() / 2;
            std::nth_element(ufpy_check.begin(), l, ufpy_check.end());
            ufp_y_sol = ufpy_check[ufpy_check.size() / 2];
        }

        /* Foot placement relative to current COM */
        xfp = xlip_sol[0];
        yfp = xlip_sol[1];

        /* Store solution for warm start */
        xlip_guess_ = xlip_sol;
        ufp_guess_ = ufp_sol;

        /* Increase solver loop iteration */
        iter_++;
    }
    else
    {
        casadi::Matrix<double> xlip_guess(n_xlip_, N_steps_);
        casadi::Matrix<double> ufp_guess(n_ufp_, N_steps_);
        // Initial guess for warm start
        if (iter_ > 0)
        {
            casadi::Matrix<double> xlip_guess = reshape(casadi::Matrix<double>(xlip_guess_), n_xlip_, N_steps_);
            casadi::Matrix<double> ufp_guess = reshape(casadi::Matrix<double>(ufp_guess_), n_ufp_, N_steps_);
        }

        // Solve optimization problem
        std::vector<casadi::DM> arg = {xlip_guess, ufp_guess, x_lip_current_, stance_leg_, mass_, zH_, Ts_, Tr_, leg_width_, Lx_offset_, Ly_des_, ufp_max, ufp_min, k_traj, mu_traj, Q_term};
        std::vector<casadi::DM> result_solver;

        result_solver = f_solver_RS_(arg);

        std::vector<double> xlip_sol = (std::vector<double>)result_solver.at(0);
        std::vector<double> ufp_sol = (std::vector<double>)result_solver.at(1);
        ufp_x_sol = ufp_sol[0];
        ufp_y_sol = ufp_sol[1];

        // Safety check for bad solutions
        // median of ufpxsol and limits
        std::vector<double> ufpx_check{ufp_x_sol, ufp_max[0], ufp_min[0]};
        auto m = ufpx_check.begin() + ufpx_check.size() / 2;
        std::nth_element(ufpx_check.begin(), m, ufpx_check.end());
        ufp_x_sol = ufpx_check[ufpx_check.size() / 2];
        // median of ufpysol and limits
        // std::cout << "stanceleg: " << stance_leg_ << "\n";
        if (stance_leg_ == -1) // left stance
        {
            std::vector<double> ufpy_check{-ufp_max[1], ufp_y_sol, -ufp_min[1]};
            // std::cout << "median vector: " << ufpy_check << "\n";
            auto l = ufpy_check.begin() + ufpy_check.size() / 2;
            std::nth_element(ufpy_check.begin(), l, ufpy_check.end());
            ufp_y_sol = ufpy_check[ufpy_check.size() / 2];
        }
        else // right stance
        {
            std::vector<double> ufpy_check{ufp_min[1], ufp_y_sol, ufp_max[1]};
            // std::cout << "median vector: " << ufpy_check << "\n";
            auto l = ufpy_check.begin() + ufpy_check.size() / 2;
            std::nth_element(ufpy_check.begin(), l, ufpy_check.end());
            ufp_y_sol = ufpy_check[ufpy_check.size() / 2];
        }

        // Foot placement relative to current COM
        xfp = xlip_sol[0];
        yfp = xlip_sol[1];

        // Store solution for warm start
        xlip_guess_ = xlip_sol;
        ufp_guess_ = ufp_sol;

        // Increase solver loop iteration
        iter_++;
    }

    // Update fp_mpc struct
    linux_to_slrt_update.time = slrt_to_linux_update.time; // Send time back to simulink
    linux_to_slrt_update.ufp_wrt_st[0] = ufp_x_sol;
    linux_to_slrt_update.ufp_wrt_st[1] = ufp_y_sol;
    linux_to_slrt_update.ufp_wrt_com[0] = xfp;
    linux_to_slrt_update.ufp_wrt_com[1] = yfp;

    // Print to terminal for checking
    std::cout << "Cassie time: " << linux_to_slrt_update.time << " \n";

    std::cout << "xc init: " << x_lip_current_[0] << "\n";
    std::cout << "yc init: " << x_lip_current_[1] << "\n";
    std::cout << "Lx init: " << x_lip_current_[2] << "\n";
    std::cout << "Ly init: " << x_lip_current_[3] << "\n";
    std::cout << "stanceLeg: " << stance_leg_ << "\n";
    std::cout << "zH: " << zH_ << "\n";
    std::cout << "Ts: " << Ts_ << "\n";
    std::cout << "Tr: " << Tr_ << "\n";
    std::cout << "s: " << s_ << "\n";
    std::cout << "leg width: " << leg_width_ << "\n";
    std::cout << "Lx_offset: " << Lx_offset_ << "\n";
    std::cout << "Ly_des: " << Ly_des_ << "\n";

    std::cout << "ufpsol x: " << linux_to_slrt_update.ufp_wrt_st[0] << ", ufpsol y: " << linux_to_slrt_update.ufp_wrt_st[1] << "\n";
    std::cout << "xsw2com sol: " << linux_to_slrt_update.ufp_wrt_com[0] << ", ysw2com_sol: " << linux_to_slrt_update.ufp_wrt_com[1] << "\n";

    std::cout << "kx_traj: ";
    for (int i = 0; i < N_steps_; i++)
    {
        std::cout << kx_traj_[i] << ", ";
    }
    std::cout << "\nky_traj: ";
    for (int i = 0; i < N_steps_; i++)
    {
        std::cout << ky_traj_[i] << ", ";
    }
    std::cout << "\nmux_traj: ";
    for (int i = 0; i < N_steps_; i++)
    {
        std::cout << mux_traj_[i] << ", ";
    }
    std::cout << "\nmuy_traj: ";
    for (int i = 0; i < N_steps_; i++)
    {
        std::cout << muy_traj_[i] << ", ";
    }
    return;
}