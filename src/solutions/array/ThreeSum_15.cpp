#include <unordered_map>

#include "ThreeSum_15.hpp"

vector<vector<int>> ThreeSum::operator()(vector<int> &nums)
{
    vector<vector<int>> res;
    std::sort(nums.begin(), nums.end());

    for (int i = 0; i < nums.size();) {
        int j = i + 1;
        int k = nums.size() - 1;
        while (j < k) {
            int curSum = nums[i] + nums[j] + nums[k];
            if (curSum < 0) {
                int preVal = nums[j];
                //  // This method is to find next valid index and can be written to a function
                while (++j < k && nums[j] == preVal) { // removing duplication 1 and can be deleted
                    continue;
                }
                continue;
            } else if (curSum > 0) {
                int preVal = nums[k];
                while (j < --k && nums[k] == preVal) { // removing duplication 2 and can be deleted
                    continue;
                }
                continue;
            } else {
                res.push_back({nums[i], nums[j], nums[k]});
                int preJ = nums[j];
                int preK = nums[k];
                while (++j < k && nums[j] == preJ) { // removing duplication 3
                    continue;
                }
                while (j < --k && nums[k] == preK) {  // removing duplication 4
                    continue;
                }
                continue;
            }
        }
        int pre = nums[i];
        while (++i < nums.size() && nums[i] == pre) {  // removing duplication 5
            continue;
        }
    }
    return res;

}
