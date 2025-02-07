#include <tuple>
#include "src/utilities/CommonHeaders.hpp"

/**
 * @details We can break this problem down from two dimensions (all is about partition):
 * 1. Only have one knapsack
 * 2. Only have one string
 */
class OnesAndZeros {
public:
    int operator()(vector<string> &strs, int m, int n);

    static std::tuple<vector<string>, int, int> GetTestArg(TestCase caseIdx);
};