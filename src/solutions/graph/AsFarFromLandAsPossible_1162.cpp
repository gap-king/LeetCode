#include <queue>
#include <utility>

#include "AsFarFromLandAsPossible_1162.hpp"

vector<vector<int>> AsFarFromLandAsPossible::GetTestArg(TestCase caseIdx)
{
    switch (caseIdx) {
        case TestCase::one:
        return 
        {
            {1, 0, 1},
            {0, 0, 0},
            {1, 0, 1}
        };
    case TestCase::two:
        return
        {
            {1, 0, 0},
            {0, 0, 0},
            {0, 0, 0}
        };
    default:
        return {};
    }
}

int AsFarFromLandAsPossible::operator()(vector<vector<int>> &grid)
{
    std::queue<std::pair<int, int>> q;
    int m = grid.size();
    int n = grid[0].size();

    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            // Multi-source BFS from land
            if (grid[i][j] == 1) {
                q.push({i + 1, j});
                q.push({i - 1, j});
                q.push({i, j + 1});
                q.push({i, j - 1});
            }
        }
    }

    // all 0 or 1
    if (q.empty() || q.size() == m * n * 4) { // 4 means 4 directions
        return -1;
    }

    // start searching
    int steps = 0;
    while (!q.empty()) {
        ++steps;
        // for distinguishing different steps with order, we use a tmpQ
        std::queue<std::pair<int, int>> tmpQ;
        while (!q.empty()) {
            int i = q.front().first;
            int j = q.front().second;
            q.pop();
            if (i < 0 || i == m || j < 0 || j == n || grid[i][j] != 0) {
                continue;
            }
            grid[i][j] = steps;

            tmpQ.push({i + 1, j});
            tmpQ.push({i - 1, j});
            tmpQ.push({i, j + 1});
            tmpQ.push({i, j - 1});
        }
        q = std::move(tmpQ);
    }
    return steps - 1;
}