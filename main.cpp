#include <iostream>
#include <vector>

#include "vectors.h"
#include "optimism.h"

int main(){
  std::cout << "----------Task A-------------" << std::endl;
  int number = 26;

  std::vector<int> numbers = makeVector(number);

  std::cout << "A vector has been made with numbers 0 to " << number << std::endl;
  printVector(numbers);

  std::cout << "\n----------Task B-------------" << std::endl;
  std::cout << "A vector has been made with random numbers" << std::endl;
  number = 15;

  std::vector<int> random = makeRandom(number);
  printVector(random);

  std::cout << "\nNow the vector has only positive integers (not including 0)" << std::endl;
  printVector(goodVibes(random));

  return 0;
}
