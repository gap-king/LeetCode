#include <unordered_map>
#include "SubarraySumEqualsK_560.hpp"

using namespace std;

int SubarraySumEqualsK::operator()(const vector<int> &nums, int k) {
    unordered_map<int, int> sumNum;

    int res = 0;
    int sum = 0;
    sumNum[0] = 1;
    for (int i = 0; i < nums.size(); ++i) {
        sum += nums[i];
        if (sumNum.count(sum - k)) {
            res += sumNum[sum - k];
        }
        ++sumNum[sum];
    }
    return res;
}