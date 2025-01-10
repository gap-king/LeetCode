#include <algorithm>

#include "MergeSortedArray_88.hpp"

using namespace std;

void MergeSortedArray::operator()(std::vector<int> &nums1, int m, std::vector<int> &nums2, int n) {
    vector<int> res(m + n);
    int x = 0;
    int y = 0;
    for (int i = 0; i < res.size(); ++i) {
        if (x == m) {
            std::move(nums2.begin() + y, nums2.end(), res.begin() + i);
            break;
        }
        if (y == n) {
            std::move(nums1.begin() + x, nums1.begin() + m, res.begin() + i);
            break;
        }
        if (nums1[x] < nums2[y]) {
            res[i] = nums1[x];
            ++x;
        } else {
            res[i] = nums2[y];
            ++y;
        }
    }
    std::move(res.begin(), res.end(), nums1.begin());

    return;
}