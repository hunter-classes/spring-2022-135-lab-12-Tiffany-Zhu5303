#include <iostream>
#include <vector>
#include <stdlib.h>
#include <time.h>

#include "vectors.h"
#include "optimism.h"
#include "fusion.h"
#include "pairwise.h"

int main(){
  srand(time(0));
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

  std::cout << "\n----------Task C-------------" << std::endl;
  std::cout << "The vector of positive integers from Task B is added to the end of Task A and the vector from Task B is cleared" << std::endl;

  gogeta(numbers, random);

  std::cout << "Task A ";
  printVector(numbers);
  std::cout << "Task B ";
  printVector(goodVibes(random));

  std::cout << "\n----------Task D-------------" << std::endl;
  number = 9;
  random = makeRandom(number);
  printVector(random);
  
  number = 13;
  std::vector<int> random2 = makeRandom(number);
  printVector(random2);

  std::cout << "The third vector is the addition of the first two vectors of this task\n" << std::endl;
  printVector(sumPairWise(random, random2));

  return 0;
}
