#include <iostream>
#include <fstream>
#include <string>

int main () {

  std::ofstream arrayOutput("array.pyrxi");

  std::string pyrxi[6] = {"neoxi", "mirior", "emma", "dot", "alex", "ahkto"};

  arrayOutput << pyrxi[1];

  

  return 0;
}
