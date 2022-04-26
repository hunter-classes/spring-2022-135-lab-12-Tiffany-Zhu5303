#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <vector>
#include "doctest.h"
#include "vectors.h"

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
