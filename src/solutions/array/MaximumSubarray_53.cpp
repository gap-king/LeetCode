#include <algorithm>
#include <limits>
#include "MaximumSubarray_53.hpp"

using namespace std;

int MaximumSubarray::operator()(const vector<int> &nums) {
    int res = std::numeric_limits<int>::min();
    int curSum = 0;

    for (int i = 0; i < nums.size(); ++i) {
        curSum += nums[i];
        res = std::max(curSum, res);

        if (curSum <= 0) {
            curSum = 0;
        }
    }

    return res;

}