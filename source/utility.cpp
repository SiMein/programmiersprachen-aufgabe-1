#include "utility.hpp"

template <typename T>
void print(T const& iteratable_container){

  std::cout << "{";

  unsigned int number_of_elements = iteratable_container.size();

  unsigned int num_printed_elements = 0;
  for(auto const& element : iteratable_container) {
    std::cout << element;

    if(++num_printed_elements < number_of_elements) {
      std::cout << " ";
    }
  }

  std::cout << "}" << std::endl;
}
