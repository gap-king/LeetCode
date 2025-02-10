#ifndef SOLUTION_MANAGER_HPP
#define SOLUTION_MANAGER_HPP

#include <vector>
#include <string>

#include "solutions/array/TwoSum_1.hpp"
#include "solutions/array/MedianOfTwoSortedArrays_4.hpp"
#include "solutions/array/ContainerWithMostWater_11.hpp"
#include "solutions/array/ThreeSum_15.hpp"
#include "solutions/array/MaximumSubarray_53.hpp"
#include "solutions/array/MergeIntervals_56.hpp"
#include "solutions/array/MergeSortedArray_88.hpp"
#include "solutions/array/LongestConsecutiveSequence_128.hpp"
#include "solutions/array/KthLargestElement_215.hpp"
#include "solutions/array/SubarraySumEqualsK_560.hpp"
#include "solutions/math_problem/PalindromeNumber_9.hpp"
#include "solutions/math_problem/PowerXN_50.hpp"
#include "solutions/string/EditDistance_72.hpp"
#include "solutions/game/NimGame_292.hpp"
#include "solutions/dynamic_programming/ClimbingStairs_70.hpp"
#include "solutions/dynamic_programming/NetworkDelayTime_743.hpp"
#include "solutions/dynamic_programming/PathWithLeastEffort_1631.hpp"
#include "solutions/binary_tree/MaximumDepthOfBinaryTree_104.hpp"
#include "solutions/binary_tree/MinimumDepthOfBinaryTree_111.hpp"
#include "solutions/graph/NumberOfIslands_200.hpp"
#include "solutions/graph/SwimInRisingWater_778.hpp"
#include "solutions/knapsack/PartitionEqualSubsetSum_416.hpp"
#include "solutions/knapsack/OnesAndZeros_474.hpp"
#include "solutions/linked_list/AddTwoNumbers_2.hpp"

class SolutionManager {
public:
    void SolvePalindromeNumber(const int &number);
    
    void SolveTwoSum(const std::vector<int> &nums, const int &target);

    void SolveContainerWithMostWater(const std::vector<int> &height);

    void SolveEditDistance(const std::string &word1, const std::string &word2);

    void SolveLongestConsecutiveSequence(const std::vector<int> &nums);

    void SolveMergeIntervals(std::vector<std::vector<int>> &intervals);

    void SolveSubarraySumEqualsK(const std::vector<int> &nums, int k);

    static void SolveMaximumSubarray(const std::vector<int> &num);

    void SolvePowerXN(const double x, const int n);

    void SolveNimGame(const int n);

    void SolveMergeSortedArray(std::vector<int> &nums1, int m, std::vector<int> &nums2, int n);

    void SolveClimbingStairs(int n);

    void SolveKthLargestElement(const std::vector<int> &nums, int k);

    void SolveMedianOfTwoSortedArrays(std::vector<int>& nums1, std::vector<int>& nums2);

    void SolveNetWorkDelayTime(const std::vector<std::vector<int>> &times, int n, int k);

    void SolvePathWithLeastEffort(const std::vector<std::vector<int>> &heights);

    void SolveMaxinumDepthOfBinaryTree(TreeNode *root);

    void SolveMinimumDepthOfBinaryTree(TreeNode *root);

    void SolvePartitionEqualSubsetSum(const vector<int> &nums);

    void SolveThreeSum(vector<int> &nums);

    void SolveNumberOfIslands();

    void SolveSwimInRisingWater();

    void SolveOnesAndZeros();

    void SolveAddTwoNumbers();
};


#endif // SOLUTION_MANAGER_HPP