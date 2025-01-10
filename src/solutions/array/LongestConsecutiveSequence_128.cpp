#include <algorithm>
#include <unordered_map>
#include <unordered_set>
#include "LongestConsecutiveSequence_128.hpp"

using namespace std;

int LongestConsecutiveSequence::Solve(const std::vector<int> &nums) {
    unordered_map<int, int> numCount;;
    for (auto i : nums) {
        if (!numCount.count(i)) {
            numCount[i] = 1;
        }
    }
    
    int maxLength = 1;
    for (auto i : nums) {
        int j = i;
        while (numCount.count(j - 1) && numCount.at(j - 1) != 0) {
            numCount[j] += numCount[j - 1];
            numCount[j - 1] = 0;
            maxLength = std::max(numCount[j], maxLength);
            --j;
        }
    }
    return maxLength;
    
}

int LongestConsecutiveSequence::Solve2(const std::vector<int> &nums) {
    unordered_set<int> numSet(nums.begin(), nums.end());

    int maxLength = 0;

    int cc = maxLength++;
    for (auto &num : numSet) {
        if (!numSet.count(num - 1)) {
            int length = 1;
            while (numSet.count(num + length)) {
                ++length;
            }
            maxLength = std::max(maxLength, length);
        }
    }


    return maxLength;
}