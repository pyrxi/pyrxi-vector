#include "parseFile.h"

#include <iostream>
#include <string>
#include <vector>
#include <sstream>

// std::vector<std::string>

std::vector<std::string> parseFile(std::string string_buffer) {

  std::vector<std::string> string_contents;
  std::stringstream test_string;
  test_string << string_buffer;

  for (int i = 0; i < 6; i++) {
    std::getline(test_string, string_buffer, ',');
    string_contents.push_back(string_buffer);
  }

  return string_contents; /*This is bad. Don't return the vector.
                            Return a pointer to the vector in this function.
                            Learn to implement that. */
}
