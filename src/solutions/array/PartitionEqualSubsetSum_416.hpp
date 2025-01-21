#include "src/utilities/CommonHeaders.hpp"

/**
 * @brief Confirm whether the input array can be partitioned to 2 arrays whose sum are equal
 * @details The first is to transfer problem to whether sum of some nums can equal to sum / 2.
 * The core is to record whether the sum of previous num can achive some values rather than numbers index because we only need to know the value of sum.
 * Use recursion to understand: how about sum of 1, 2, 3, ... n numbers?
 */

class PartitionEqualSubsetSum {
public:
    bool operator()(const vector<int> &nums);
private:
    // slower than main method
    bool UseHash(const vector<int> &nums);
    // slowest method, not recommend
    bool UseDfs(const vector<int> &nums);
};