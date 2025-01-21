#include <numeric>
#include <unordered_set>

#include "PartitionEqualSubsetSum_416.hpp"

// The fastest method
bool PartitionEqualSubsetSum::operator()(const vector<int> &nums)
{
    int sum = 0;
    for (int num : nums) {
        sum += num;
    }
    
    if (sum % 2 != 0) return false;  // If sum is odd, partition is not possible
    
    int target = sum / 2;
    vector<bool> dp(target + 1, false); // represents whether a subset with sum i is achievable
    dp[0] = true;  // We can always make a subset with sum 0
    
    for (int num : nums) {
        for (int j = target; j >= num; --j) {
            dp[j] = dp[j] || dp[j - num];
        }
    }
    
    return dp[target];  // If we can make a subset with sum == target, return true
}

// This method is more intuitive but slower because of the frequent creating and deleting of vector
bool PartitionEqualSubsetSum::UseHash(const vector<int> &nums)
{
    int sum = std::accumulate(nums.begin(), nums.end(), 0);

    if (sum % 2) {
        return false;
    }

    std::unordered_set<int> achievedSum; // The sum that can be sumed by num
    achievedSum.insert(0);
    for (auto &num : nums) {
        vector<int> tmpSums; // It may cost more time because you need to create and delete vector repeatedly
        for (auto curSum : achievedSum) {
            int tmpSum = num + curSum;
            if (tmpSum <= sum / 2 && !achievedSum.count(tmpSum)) {
                tmpSums.push_back(tmpSum);
            }
        }
        for (auto tmpSum : tmpSums) {
            achievedSum.insert(tmpSum);
        }
    }
    if (achievedSum.count(sum / 2)) {
        return true;
    }
    return false;
}

void SearchValue(int curIdx, int curSum, const int target, const vector<int> &nums, bool &find)
{
    if (find) {
        return;
    }
    if (curSum == target) {
        find = true;
        return;
    }
    if (curSum > target) {
        return;
    }
    for (int i = curIdx + 1; i < nums.size(); ++i) {
        SearchValue(i, curSum + nums[i], target, nums, find);
    }

    return;
}

// Do not use DFS because it do too much wasted effort
bool PartitionEqualSubsetSum::UseDfs(const vector<int> &nums)
{
    int sum = 0;
    for (int i = 0; i < nums.size(); ++i) {
        sum += nums[i];
    }

    if (sum % 2) {
        return false;
    }

    // DFS
    bool find = false;
    SearchValue(-1, 0, sum / 2, nums, find);

    return find;
}

