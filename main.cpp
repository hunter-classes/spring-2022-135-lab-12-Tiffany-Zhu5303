#include <iostream>
#include <vector>

#include "vectors.h"

int main(){
  std::cout << "----------Task A-------------" << std::endl;
  int number = 26;

  std::vector<int> numbers = makeVector(number);

  std::cout << "A vector has been made with numbers 0 to " << number << std::endl;
  std::cout << "Vector: ";
  for(int i = 0; i < number - 1; i++){
    std::cout << numbers[i] << ", ";
  }
  std::cout << numbers.back() << std::endl;

  return 0;
}
