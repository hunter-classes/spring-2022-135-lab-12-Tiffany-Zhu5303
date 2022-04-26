#include <vector>
#include <iostream>
#include "vectors.h"

std::vector<int> makeVector(int n){
  std::vector<int> numbers;

  for(int i = 0; i < n; i++){
    numbers.push_back(i);
  }

  return numbers;
}

void printVector(std::vector<int> v){
  std::cout << "Vector: [";
  int length = v.size();
  for(int i = 0; i < length - 1; i++){
    std::cout << v[i] << ", ";
  }
  std::cout << v.back() << "]" << std::endl;
}
