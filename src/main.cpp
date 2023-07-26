#include <iostream>
#include <fstream>
#include <string>
#include <vector>

int main () {

  std::ofstream arrayOutput("array.pyrxi"); // Opens file

  std::vector<std::string> pyrxi = {"neoxi", "mirior", "emma", "dot", "alex", "ahkto"}; // pyrxi[0] through [5] for filler text

/*  for (int i = 0; i < 6; i++) {
    arrayOutput << pyrxi[i] << ",";
  } // loop through the array

  arrayOutput.close(); // close file
*/
  return 0; // quit
}
