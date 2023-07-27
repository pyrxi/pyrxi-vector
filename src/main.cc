#include <iostream>
#include <fstream>
#include <string>
#include <vector>

// beginning of fileInput.cc

int fileInput() {

  std::ifstream pyrxi_vector_file("array.pyrxi"); // loads array file

  if ( !pyrxi_vector_file.is_open() ) { // if the file isn't opened
    std::cout << "Error: File not found";
    return 1; // file didn't load
  }

  else if ( pyrxi_vector_file.is_open() ) {
    return 2; // file loaded
  }
  else { // otherwise
    return 3; // it's bugged
  }
}
// end of fileInput.cc


int main() {

  int x = fileInput();

  if (x == 2) {
    std::cout << "file loaded";
  }
  else if (x == 1) {
    std::cout << "file did not load";
  }
  else {
    std::cout << "it's bugged";
  }
  return 0;

/*  std::fstream arrayOutput("array.pyrxi", std::ios::app); // Opens file

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
  } */
}
