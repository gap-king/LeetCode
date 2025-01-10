#include <vector>

class MaximumSubarray {
public:
    // One round of traversal. 
    // As long as the current sum is less than 0, it will not contribute to the following.
    int operator()(const std::vector<int> &nums);
};