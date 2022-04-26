#include <vector>
#include "vectors.h"

std::vector<int> makeVector(int n){
  std::vector<int> numbers;

  for(int i = 0; i < n; i++){
    numbers.push_back(i);
  }

  return numbers;
}
