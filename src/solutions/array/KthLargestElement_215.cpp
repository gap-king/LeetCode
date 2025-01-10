#include <queue>

#include "KthLargestElement_215.hpp"

using namespace std;

int FindValue(const vector<int> &nums, int k) {
    int pivot = nums.front();

    // We divide the nums to 3 part exactly.
    vector<int> part1;
    vector<int> part2;
    int numPivot = 1; // To avoid multiple repeated pivot
    for (int i = 1; i < nums.size(); ++i) {
        if (nums[i] == pivot) {
            ++numPivot;
        } else if (nums[i] < pivot) {
            part1.push_back(nums[i]);
        } else {
            part2.push_back(nums[i]);
        }
    }

    if (part2.size() >= k) { // Use a case to draw a picture, such as {2, 1, 3, 3, 3, 4, 5, 6}, you can conclude the logic quickly.
        return FindValue(part2, k);
    } else if (part2.size() + numPivot < k) {
        return FindValue(part1, k - part2.size() - numPivot);
    } else {
        return pivot;
    }

}

int UseHeap(const vector<int> &nums, int k) {
    std::priority_queue<int, std::vector<int>, std::greater<int>> heap;
    for (auto num : nums) {
        heap.push(num);
        if (heap.size() > k) {
            heap.pop();
        }
    }
    return heap.top();
}


int KthLargestElement::operator()(const std::vector<int> &nums, int k) {
    // int res = FindValue(nums, k);
    int res = UseHeap(nums, k);
    return res;
}