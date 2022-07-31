#include <stdio.h>
#include <dlfcn.h>
#include <ctime>

// C++ (and CasADi) from here on
#include <casadi/casadi.hpp>

using namespace casadi;

void copy_solver_lib(const std::string solver)
{
  std::string compile_command = "cp " + solver + ".so ../../../build";
  int flag = system(compile_command.c_str());
  casadi_assert(flag == 0, "Compilation failed");
  std::cout << "--> Copied " + solver + ".so to build/\n";
}

int main()
{
  std::string solv;

  /** 2 step horizon **/
  solv = "cassie_LS_simplempc_Ns2_Ni4_qrqp";   
  copy_solver_lib(solv);

  solv = "cassie_RS_simplempc_Ns2_Ni4_qrqp";
  copy_solver_lib(solv);

  /** 4 step horizon **/
  solv = "cassie_LS_simplempc_Ns4_Ni4_qrqp";   
  copy_solver_lib(solv);

  solv = "cassie_RS_simplempc_Ns4_Ni4_qrqp";
  copy_solver_lib(solv);

  /** 6 step horizon **/
  solv = "cassie_LS_simplempc_Ns6_Ni4_qrqp";   
  copy_solver_lib(solv);

  solv = "cassie_RS_simplempc_Ns6_Ni4_qrqp";
  copy_solver_lib(solv);

  /** 8 step horizon **/
  solv = "cassie_LS_simplempc_Ns8_Ni4_qrqp";   
  copy_solver_lib(solv);

  solv = "cassie_RS_simplempc_Ns8_Ni4_qrqp";
  copy_solver_lib(solv);

  std::cout << "\n******* FINISHED *******\n\n";

  return EXIT_SUCCESS;
}