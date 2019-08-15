#include <gtest/gtest.h>
#include "solution.h"
#include <tuple>

using namespace std;

class SolutionTest : public ::testing::TestWithParam<tuple<int,vector<int>>> 
{
 protected:
  Solution soln;
};

TEST_P(SolutionTest, testTrap) {
  int expected = get<0>(GetParam());
  vector<int> input = get<1>(GetParam());
  EXPECT_EQ(expected, soln.trap(input));
}

INSTANTIATE_TEST_SUITE_P(ParamTestSolution,
			 SolutionTest,
			 ::testing::Values(make_tuple(6, vector<int>({0,1,0,2,1,0,1,3,2,1,2,1}))));

int main() {
  ::testing::InitGoogleTest();
  return RUN_ALL_TESTS();
}
