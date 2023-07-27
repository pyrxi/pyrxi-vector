#include "parseFile.h"

#include <iostream>
#include <string>
#include <vector>
#include <sstream>


std::vector<std::string> parseFile(std::string string_buffer) { // takes the input buffer string

  std::vector<std::string> string_contents;                     // creates vector
  std::stringstream test_string(string_buffer);                 // sets buffer string as stream


  while (std::getline(test_string, string_buffer, ',') ) {      // while getline is running
    string_contents.push_back(string_buffer);                   // write each value to vector
  }

return string_contents;                                         // returns the vector

                                                                /*Don't return the full vector.
                                                                Return a pointer to the vector.
                                                                Learn to implement that. */
}
