#include "fileInput.h"
#include "parseFile.h"

#include <iostream>
#include <string>

// beginning of fileInput.cc


// end of fileInput.cc


int main() {

  std::string x = fileInput();

  std::vector<std::string> output = parseFile(x);

  // test code to make sure the array works right

  for (int i = 0; i < output.size(); i++) {
    std::cout << output[i];
  }

}
