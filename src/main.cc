#include "fileInput.h"
#include "parseFile.h"

#include <iostream>
#include <string>

// beginning of fileInput.cc


// end of fileInput.cc


int main() {

  std::string x = fileInput();

  std::vector<std::string> output = parseFile(x);
  for (int i = 0; i < output.size(); i++) {
    std::cout << output[i];
  }

}
