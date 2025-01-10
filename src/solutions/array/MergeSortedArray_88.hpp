#ifndef MERGE_SORTED_ARRAY_HPP
#define MERGE_SORTED_ARRAY_HPP

#include <vector>

class MergeSortedArray {
public:
    // The principle of merge sort
    // Method 2: 直接逆向添加元素，不需要消耗额外存储空间
    void operator()(std::vector<int> &nums1, int m, std::vector<int> &nums2, int n);
};

#endif