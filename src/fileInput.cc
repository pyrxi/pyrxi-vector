#include "fileInput.h"

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>

std::string fileInput() {

  std::ifstream pyrxi_vector_file("vector.pyrxi"); // loads array file

  if ( pyrxi_vector_file.is_open() ) {
    std::stringstream pyrxi_file_buffer; // buffer
    pyrxi_file_buffer << pyrxi_vector_file.rdbuf(); // ifstream into buffer
    pyrxi_vector_file.close(); // closes the file
    return pyrxi_file_buffer.str(); // passes string

  } else {

    std::string error = "Error";
    return error; // file didn't load
  }
}
