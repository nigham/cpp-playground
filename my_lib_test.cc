#include <string>
#include <vector>

#include "my_lib.h"
#include "gtest/gtest.h"
#include "gmock/gmock.h"

using namespace std;

// Simple unit test to verify that sorting works.
TEST(Sorter, Works) {
  vector<int> a = {20, 10, 45, 83, 5};
  SortVector(&a);

  EXPECT_THAT(a, testing::ElementsAre(5, 10, 20, 45, 83));
}
