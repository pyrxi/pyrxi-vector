#include <iostream>
#include <fstream>
#include <string>

int main () {

  std::ofstream arrayOutput("array.pyrxi");

  std::string pyrxi[6] = {"neoxi", "mirior", "emma", "dot", "alex", "ahkto"};

  for (int i = 0; i < 6; i++) {
    arrayOutput << pyrxi[i] << ",";
  }
  

  return 0;
}
