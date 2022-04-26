#include <vector>
#include <stdlib.h>
#include <time.h>
#include "optimism.h"

std::vector<int> makeRandom(int n){
  srand(time(NULL));
  std::vector<int> random;
  for(int i = 0; i < n; i++){
    random.push_back(rand()% (20 - 1) - 10);
  }

  return random;
}
  

std::vector<int> goodVibes(const std::vector<int> &v){
  std::vector<int> newVect;
  int length = v.size();

  for(int i = 0; i < length; i++){
    if(v[i] > 0){
      newVect.push_back(v[i]);
    }
  }

  return newVect;
}
