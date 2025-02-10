#include <iostream>
#include <string>
#include <vector>
#include "SolutionManager.hpp"
#include "src/data_structures/TreeNode.hpp"

using namespace std;

int main() {
    SolutionManager manager;
    // // manager.SolvePalindromeNumber(155551);
    // string word1 = "horse";
    // string word2 = "ros";

    // vector<int> nums {0,3,7,2,5,8,4,6,0,1};
    // manager.SolveLongestConsecutiveSequence(nums);

    // // vector<vector<int>> intervals {{8,10}, {1,3}, {2,6}, {15,18}};
    // vector<vector<int>> intervals {{1,4}, {4,5}};
    // manager.SolveMergeIntervals(intervals);

    // manager.SolveSubarraySumEqualsK({1, 1, 1}, 2);

    // SolutionManager::SolveMaximumSubarray({-2,1,-3,4,-1,2,1,-5,4});

    // // manager.SolvePowerXN(2.1, 3);
    // manager.SolvePowerXN(2.1, -3);

    vector<int> nums1 {1, 2};
    vector<int> nums2 {3, 4, 5};
    vector<int> nums3 {1, 5, 11, 5};
    // manager.SolveMergeSortedArray(nums1, 1, nums2, 1);

    // manager.SolveKthLargestElement({3,2,1,5,6,4}, 2);

    // manager.SolveMedianOfTwoSortedArrays(nums1, nums2);

    // vector<vector<int>> arr {
    //     {3, 5, 78},
    //     {2, 1, 1},
    //     {1, 3, 0},
    //     {4, 3, 59},
    //     {5, 3, 85},
    //     {5, 2, 22},
    //     {2, 4, 23},
    //     {1, 4, 43},
    //     {4, 5, 75},
    //     {5, 1, 15},
    //     {1, 5, 91},
    //     {4, 1, 16},
    //     {3, 2, 98},
    //     {3, 4, 22},
    //     {5, 4, 31},
    //     {1, 2, 0},
    //     {2, 5, 4},
    //     {4, 2, 51},
    //     {3, 1, 36},
    //     {2, 3, 59}
    // };
    // manager.SolveNetWorkDelayTime(arr, 5, 5);

    // manager.SolveNetWorkDelayTime({{2,1,1}, {2,3,1}, {3,4,1}}, 4, 2);

    // manager.SolvePathWithLeastEffort({{1,2,2},{3,8,2},{5,3,5}});
    // manager.SolvePathWithLeastEffort({{1,10,6,7,9,10,4,9}});
    
    // TreeNode *tree1 = CreateTreeNodeCase1();
    // manager.SolveMaxinumDepthOfBinaryTree(tree1);
    // manager.SolveMinimumDepthOfBinaryTree(tree1);
    // DeleteBinaryTree(tree1);
    
    // manager.SolvePartitionEqualSubsetSum(nums3);
    // vector<int> nums4 {-1,0,1,2,-1,-4};
    // vector<int> nums4 {-2,0,0,2,2};
    // manager.SolveThreeSum(nums4);

    // manager.SolveNumberOfIslands();

    // manager.SolveSwimInRisingWater();

    // manager.SolveOnesAndZeros();

    manager.SolveAddTwoNumbers();

    return 0;
}