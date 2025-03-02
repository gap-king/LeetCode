#include <algorithm>
#include <vector>
#include "EditDistance_72.hpp"

using namespace std;

int EditDistance::Solve(const std::string &word1, const std::string &word2) {
    const int m = word1.size() + 1;
    const int n = word2.size() + 1;

    vector<vector<int>> dp(m, vector<int>(n));

    for (int i = 1; i < m; ++i) {
        dp[i][0] = i;
    }
    for (int j = 1; j < n; ++j) {
        dp[0][j] = j;
    }

    for (int i = 1; i < m; ++i) {
        for (int j = 1; j < n; ++j) {
            if (word1[i - 1] == word2[j - 1]) {
                dp[i][j] = dp[i - 1][j -1];
            } else {
                dp[i][j] = std::min({dp[i][j - 1], dp[i - 1][j - 1], dp[i - 1][j]}) + 1;
            }
        }
    }

    return dp[m - 1][n - 1];

}