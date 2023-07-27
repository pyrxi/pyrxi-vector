#include <iostream>
#include <fstream>
#include <string>
#include <vector>

int main () {

  std::fstream arrayOutput("array.pyrxi", std::ios::app); // Opens file

  if ( !arrayOutput.is_open() ) {
    std::cout << "file couldn't be opened";
    return 0;
  } // makes sure the file is opened

  else {

    std::vector<std::string> pyrxi = {"neoxi", "mirior", "emma", "dot", "alex", "ahkto"}; // pyrxi[0] through [5] for filler text

    for (int i = 0; i < 6; i++) {
        arrayOutput << pyrxi[i] << ",";
    } // loop through the vector

    arrayOutput.close(); // close file
    return 0; // quit
  }
}
