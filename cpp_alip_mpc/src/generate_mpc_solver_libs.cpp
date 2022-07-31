#include <stdio.h>
#include <dlfcn.h>
#include <ctime>

// C++ (and CasADi) from here on
#include <casadi/casadi.hpp>

using namespace casadi;

void generate_solver_lib(const std::string solver)
{
  std::cout << "--> Generating " + solver + " Library...\n";
  std::string compile_command = "gcc -fPIC -shared -O3 " + solver + ".c -o " + solver + ".so";
  int flag = system(compile_command.c_str());
  casadi_assert(flag == 0, "Compilation failed");
  std::cout << "--> " + solver + " Library Generated\n\n";
}

int main()
{
  std::string solv;
  std::string cpstring;
  std::string build_location = "../../../build/";
  const char* cpchar;
  int flag;

  /** 2 step horizon **/
  solv = "cassie_LS_simplempc_Ns2_Ni4_qrqp";   
  generate_solver_lib(solv);
  cpstring = "cp " + solv + ".so " + build_location;
  cpchar = cpstring.c_str();
  flag = system(cpchar);

  solv = "cassie_RS_simplempc_Ns2_Ni4_qrqp";
  generate_solver_lib(solv);
  cpstring = "cp " + solv + ".so " + build_location;
  cpchar = cpstring.c_str();
  flag = system(cpchar);

  /** 4 step horizon **/
  solv = "cassie_LS_simplempc_Ns4_Ni4_qrqp";   
  generate_solver_lib(solv);
  cpstring = "cp " + solv + ".so " + build_location;
  cpchar = cpstring.c_str();
  flag = system(cpchar);

  solv = "cassie_RS_simplempc_Ns4_Ni4_qrqp";
  generate_solver_lib(solv);
  cpstring = "cp " + solv + ".so " + build_location;
  cpchar = cpstring.c_str();
  flag = system(cpchar);

  /** 6 step horizon **/
  solv = "cassie_LS_simplempc_Ns6_Ni4_qrqp";   
  generate_solver_lib(solv);
  cpstring = "cp " + solv + ".so " + build_location;
  cpchar = cpstring.c_str();
  flag = system(cpchar);

  solv = "cassie_RS_simplempc_Ns6_Ni4_qrqp";
  generate_solver_lib(solv);
  cpstring = "cp " + solv + ".so " + build_location;
  cpchar = cpstring.c_str();
  flag = system(cpchar);

  /** 8 step horizon **/
  solv = "cassie_LS_simplempc_Ns8_Ni4_qrqp";   
  generate_solver_lib(solv);
  cpstring = "cp " + solv + ".so " + build_location;
  cpchar = cpstring.c_str();
  flag = system(cpchar);

  solv = "cassie_RS_simplempc_Ns8_Ni4_qrqp";
  generate_solver_lib(solv);
  cpstring = "cp " + solv + ".so " + build_location;
  cpchar = cpstring.c_str();
  flag = system(cpchar);

  std::cout << "******* FINISHED *******\n\n";

  return EXIT_SUCCESS;
}