/**
 * @file    Cassie_Fp_Controller.hpp
 * @author  Grant Gibson
 * @brief   Class for Cassie MPC LIP Foot Placement Controller
 * @date    September 1, 2020 -->
**/
#pragma once

#include <iostream>
#include <string.h>
#include <vector>

#include <casadi/casadi.hpp>
// using namespace casadi;

#include "linux_to_slrt_data_t.h"
#include "slrt_to_linux_data_t.h"

extern "C"
{
    // #include ComPosition_src.c
}

class Cassie_Fp_Controller
{

public:
    // EIGEN_MAKE_ALIGNED_OPERATOR_NEW

    // Constructor
    Cassie_Fp_Controller(std::string & horizon, std::string & intervals);

    // Destructor
    virtual ~Cassie_Fp_Controller();

    // Update
    void Update_(const slrt_to_linux_data_t &slrt_to_linux_update,
                 linux_to_slrt_data_t &linux_to_slrt_update);

private:
    // Related to class loop
    int iter_ = 0;

    // custom_cassie_out struct
    double time_cassie_;
    double s_;
    std::vector<double> x_lip_current_;
    double stance_leg_;
    double zH_;
    double Ts_;
    double Tr_;
    double leg_width_;
    double Lx_offset_;
    double Ly_des_;
    // std::vector<double> ufp_max_;
    // std::vector<double> ufp_min_;
    double kx_new_;
    double ky_new_;
    double mu_new_;

    // Terrain
    double kx_init_;
    std::deque<double> kx_traj_;
    double ky_init_;
    std::deque<double> ky_traj_;
    double mu_init_;
    std::deque<double> mux_traj_;
    std::deque<double> muy_traj_;

    // Cassie parameters
    const double mass_ = 31.8852;
    const double ufp_x_max = 0.5;  // max is 0.8 with ratio = 1
    const double ufp_y_max_ = 0.6;
    const double ufp_y_min_ = 0.1;
    int leg_identity_ = -1;             // leg swap parameter

    // Casadi fp solver info
    const int n_xlip_ = 4;
    const int n_ufp_ = 2;

    int N_steps_;
    int N_xsol_;
    int N_ufpsol_;

    std::string solver_LS_;        // = "qrqptestY";
    std::string solver_RS_;        // = "qrqptestY";

    casadi::Function f_solver_LS_; // = casadi::external(solver);
    casadi::Function f_solver_RS_; // = casadi::external(solver);
    
    std::vector<double> xlip_guess_;
    std::vector<double> ufp_guess_;
};