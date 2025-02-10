#include "OnesAndZeros_474.hpp"

int OnesAndZeros::operator()(vector<string> &strs, int m, int n)
{
    vector<vector<int>> memo(m + 1, vector<int>(n + 1, 0));
    vector<int> a;
    memo.push_back(a);
    // Partition 1
    for (auto &str : strs) {
        int numOfZero = 0;
        int numOfOne = 0;
        for (auto c : str) {
            c == '0' ? ++numOfZero : ++numOfOne;
        }
        // Partition 2
        for (int i = m; i >= numOfZero; --i) {
            for (int j = n; j >= numOfOne; --j) {
                memo[i][j] = std::max(memo[i][j], memo[i - numOfZero][j - numOfOne] + 1);
            }
        }
    }

    return memo[m][n];
}

std::tuple<vector<string>, int, int> OnesAndZeros::GetTestArg(TestCase caseIdx)
{
    switch (caseIdx) {
        case TestCase::one:
            return std::tuple<vector<string>, int, int>({"10", "0001", "111001", "1", "0"}, 5, 3);
            break;
        case TestCase::two:
            return std::tuple<vector<string>, int, int>({"10", "0", "1"}, 1, 1);
            break;
        default:
            return std::tuple<vector<string>, int, int>();
    }
}