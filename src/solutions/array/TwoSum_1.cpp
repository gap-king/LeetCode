#include <unordered_map>

#include "TwoSum_1.hpp"


std::vector<int> TwoSum::Solve(const std::vector<int> &nums, const int &target) {
    std::unordered_map<int, unsigned> diff2Idx;
    std::vector<int> answer;
    for (int i = 0; i < nums.size(); ++i) {
        diff2Idx[target - nums[i]] = i;
    }
    for (int i = 0; i < nums.size(); ++i) {
        if (diff2Idx.count(nums[i]) && diff2Idx.at(nums[i]) != i) {
            answer.push_back(i);
            answer.push_back(diff2Idx.at(nums[i]));
            break;
        }
    }
    return answer;
}