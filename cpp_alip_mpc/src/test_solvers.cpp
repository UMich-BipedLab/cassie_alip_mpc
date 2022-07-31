#include <stdio.h>
#include <dlfcn.h>
#include <ctime>

#include <casadi/casadi.hpp>
using namespace casadi;

int main()
{
  double stanceLeg = 1;
  std::string horizon = "2";
  std::string intervals = "4";
  std::string stance;
  if (stanceLeg == -1)
  {
    stance = "LS";
  }
  else
  {
    stance = "RS";
  }

  std::string solver = "cassie_" + stance + "_simplempc_Ns" + horizon + "_Ni" + intervals + "_qrqp";
  casadi::Function f = casadi::external(solver);

  std::cout << "--> External Functions Generated\n";

  // solver params
  const int n_xlip = 4;
  const int n_ufp = 2;
  const int N_steps = std::stoi(horizon);
  const int N_xsol = N_steps * n_xlip;
  const int N_ufpsol = N_steps * n_ufp;

  // Opt parameters: p_x_init, p_stanceLeg, p_m, p_zH, p_Ts, p_Tr, p_leg_width, p_Lx_offset, p_Ly_des, p_ufp_max,p_ufp_min, p_k, p_mu, p_Q_term
  std::vector<double> x_init = {-0.0230, 0, 0, -10}; // x_init is 5 x 1
  double m = 31.8852;
  double zH = 0.8;
  double Ts = 0.35;
  double Tr = Ts;
  double leg_width = 0.3;
  double Vy_des = 1;
  double Lx_offset = Vy_des * m * zH;
  double Ly_des = 0;
  std::vector<double> ufp_max = {0.5, 0.6};
  std::vector<double> ufp_min = {-0.5, 0.1};
  double kx = 0;
  double ky = 0;
  double mu = 1;
  casadi::DM Q_term = casadi::DM::eye(n_xlip);
  std::cout << "Qterm: \n" << Q_term << "\n\n";
  Q_term *= 10;
  std::cout << "Qterm: \n" << Q_term << "\n\n";

  // terrain deques
  std::deque<double> kx_traj;
  std::deque<double> ky_traj;
  std::deque<double> mux_traj;
  std::deque<double> muy_traj;
  for (int i = 0; i < N_steps; i++)
  {
    kx_traj.push_back(kx);
    ky_traj.push_back(ky);
    mux_traj.push_back(mu);
    muy_traj.push_back(mu);
  }
  // check terrain traj's
  std::cout << "kx_traj: ";
  for (int i = 0; i < N_steps; i++)
  {
    std::cout << kx_traj[i] << ", ";
  }
  std::cout << "ky_traj: ";
  for (int i = 0; i < N_steps; i++)
  {
    std::cout << ky_traj[i] << ", ";
  }
  std::cout << "mux_traj: ";
  for (int i = 0; i < N_steps; i++)
  {
    std::cout << mux_traj[i] << ", ";
  }
  std::cout << "muy_traj: ";
  for (int i = 0; i < N_steps; i++)
  {
    std::cout << muy_traj[i] << ", ";
  }

  // terrain casadi matrices
  casadi::Matrix<double> k_traj(n_ufp, N_steps);
  casadi::Matrix<double> mu_traj(n_ufp, N_steps);
  for (int i = 0; i < n_ufp; i++)
  {
    for (int j = 0; j < N_steps; j++)
    {
      if (i == 1) // x-component
      {
        k_traj(i, j) = kx_traj[j];
        mu_traj(i, j) = mux_traj[j];
      }
      else // y-component
      {
        k_traj(i, j) = ky_traj[j];
        mu_traj(i, j) = muy_traj[j];
      }
    }
  }

  casadi::Matrix<double> x_guess(n_xlip, N_steps);
  casadi::Matrix<double> ufp_guess(n_ufp, N_steps);
  std::vector<casadi::DM> arg = {x_guess, ufp_guess, x_init, stanceLeg, m, zH, Ts, Tr, leg_width, Lx_offset, Ly_des, ufp_max, ufp_min, k_traj, mu_traj, Q_term};

  double t_sum = 0;
  double n_iters = 10;
  double time_start, time_end;
  std::vector<casadi::DM> res;
  for (int i = 0; i < n_iters; i++)
  {
    std::cout << "--> Start Solver...\n";
    time_start = clock();
    res = f(arg);
    time_end = (clock() - time_start) / (double)CLOCKS_PER_SEC;
    t_sum += time_end;
    std::cout << i << " --> Finished solving! ( " << time_end << " sec)\n";
  }
  std::cout << "avg calc time: " << t_sum / n_iters << "\n";

  std::vector<double> xlip_sol = (std::vector<double>)res.at(0);
  std::vector<double> ufp_sol = (std::vector<double>)res.at(1);
  std::cout << "xlip_sol:\n"
            << xlip_sol << std::endl
            << "\n";
  std::cout << "ufp_sol:\n"
            << ufp_sol << std::endl
            << "\n";

  double xfp = xlip_sol[0];
  double yfp = xlip_sol[1];

  std::cout << "ufp_x: " << ufp_sol[0] << ", ufp_y: " << ufp_sol[1] << "\n";
  std::cout << "xswing2com: " << xfp << ", yswing2com: " << yfp << "\n";

  return 0;
}