#include <vector>
#include "fusion.h"

void gogeta(std::vector<int> &goku, std::vector<int> &vegeta){
  for(int i = 0; i < vegeta.size(); i++){
    goku.push_back(vegeta[i]);
  }

  vegeta.clear();
}
  
