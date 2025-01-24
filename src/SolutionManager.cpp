#include "SolutionManager.hpp"

extern const int aa = 5;

namespace {
    int iii = 55;
}


void SolutionManager::SolvePalindromeNumber(const int &number) {
    PalindromeNumber solver;
    bool answer1 = solver.ReverseHalfNumber(number);
    bool answer2 = solver.UseString(number);
    
    return;
}

void SolutionManager::SolveTwoSum(const std::vector<int> &nums, const int &target) {
    TwoSum solver;
    
    solver.Solve(nums, target);

    return;

}

void SolutionManager::SolveContainerWithMostWater(const std::vector<int> &height) {
    ContainerWithMostWater solver;

    int maxArea = solver.Solve(height);
}

void SolutionManager::SolveEditDistance(const std::string &word1, const std::string &word2) {
    EditDistance solver;

    int distance = solver.Solve(word1, word2);

    return;
}

void SolutionManager::SolveLongestConsecutiveSequence(const std::vector<int> &nums) {
    LongestConsecutiveSequence solver;

    int length = solver.Solve(nums);

    length = solver.Solve2(nums);
    return;
}

void SolutionManager::SolveMergeIntervals(std::vector<std::vector<int>> &intervals) {
    std::vector<std::vector<int>> mergedIntervals = MergeIntervals()(intervals);

    return;
}

void SolutionManager::SolveSubarraySumEqualsK(const std::vector<int> &nums, int k) {
    int res = SubarraySumEqualsK()(nums, k);
    
    return;
}

void SolutionManager::SolveMaximumSubarray(const std::vector<int> &nums) {
    int res = MaximumSubarray()(nums);

    return;
}

void SolutionManager::SolvePowerXN(const double x, const int n) {
    double res = PowerXN()(x, n);

    return;
}

void SolutionManager::SolveNimGame(const int N) {
    bool res = NimGame()(N);

    return;
}

void SolutionManager::SolveMergeSortedArray(std::vector<int> &nums1, int m, std::vector<int> &nums2, int n) {
    MergeSortedArray()(nums1, m, nums2, n);

    return;
}

void SolutionManager::SolveClimbingStairs(int n) {
    int res = ClimbingStairs()(n);

    return;

}

void SolutionManager::SolveKthLargestElement(const std::vector<int> &nums, int k) {
    int res = KthLargestElement()(nums, k);

    return;
}

void SolutionManager::SolveMedianOfTwoSortedArrays(std::vector<int>& nums1, std::vector<int>& nums2) {
    double res = MedianOfTwoSortedArrays()(nums1, nums2);

    return;

}

void SolutionManager::SolveNetWorkDelayTime(const std::vector<std::vector<int>> &times, int n, int k) {
    int res = NetWorkDelayTime()(times, n, k);

    return;
}

void SolutionManager::SolvePathWithLeastEffort(const std::vector<std::vector<int>> &heights) {
    int res = PathWithLeastEffort()(heights);

    return;
}

void SolutionManager::SolveMaxinumDepthOfBinaryTree(TreeNode *root) {
    int res = MaximumDepthOfBinaryTree()(root);

    return;
}

void SolutionManager::SolveMinimumDepthOfBinaryTree(TreeNode *root) {
    int res = MinimumDepthOfBinaryTree()(root);

    return;
}

void SolutionManager::SolvePartitionEqualSubsetSum(const vector<int> &nums)
{
    int res = PartitionEqualSubsetSum()(nums);

    return;
}

void SolutionManager::SolveThreeSum(vector<int> &nums)
{
    vector<vector<int>> res = ThreeSum()(nums);

    return;
}

void SolutionManager::SolveNumberOfIslands()
{
    auto testCase1 = NumberOfIslands::GetTestArg(TestCase::one);
    auto testCase2 = NumberOfIslands::GetTestArg(TestCase::two);

    int res1 = NumberOfIslands()(testCase1);

    return;
}