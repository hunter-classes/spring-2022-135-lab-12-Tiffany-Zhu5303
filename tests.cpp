#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <vector>
#include "doctest.h"
#include "vectors.h"
#include "optimism.h"
#include "fusion.h"
#include "pairwise.h"

TEST_CASE("making vectors"){
  std::vector<int> first = makeVector(6);
  std::vector<int> second = makeVector(20);

  for(int i = 0; i < 6; i++){
    CHECK(first[i] == i);
  }

  CHECK(second.front() == 0);
  CHECK(second.back() == 19);
  CHECK(second.size() == 20);
}

TEST_CASE("vector of positive integers only"){
  std::vector<int> third = {0, 1, -2, 3, -4, -2, -4, 6, -7};
  std::vector<int> positiveThird = goodVibes(third);

  for(int i = 0; i < positiveThird.size(); i++){
    CHECK(positiveThird[i] > 0);
  }

  CHECK(positiveThird.front() == 1);
  CHECK(positiveThird.back() == 6);
}

TEST_CASE("fusing vectors"){
  std::vector<int> fourth = {3, 6, 9, 12};
  std::vector<int> fifth = {4, 8, 12, 16};
  gogeta(fourth, fifth);

  CHECK(fourth.size() == 8);
  CHECK(fifth.empty() == true);
  CHECK(fourth.at(4) == 4);
  CHECK(fourth.back() == 16);
}

TEST_CASE("adding vectors"){
  std::vector<int> sixth = {1, 11, 2, -6, 4};
  std::vector<int> seventh = {4, 6, -6, 1, 8, 3};
  std::vector<int> eigth = sumPairWise(sixth, seventh);

  CHECK(eigth.front() == 5);
  CHECK(eigth.size() == 6);
  CHECK(eigth.back() == 3);
  CHECK(eigth.at(4) == 12);
}

  
  
