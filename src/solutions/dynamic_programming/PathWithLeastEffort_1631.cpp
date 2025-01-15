#include <queue>
#include "PathWithLeastEffort_1631.hpp"


int PathWithLeastEffort::operator()(const std::vector<std::vector<int>> &heights) {
    const int numOfRow = heights.size();
    const int numOfCol = heights[0] .size();

    vector<vector<int>> minEffort(numOfRow, vector<int>(numOfCol, std::numeric_limits<int>::max()));
    minEffort[0][0] = 0;

    // Use a heap to store the possible start points
    std::priority_queue<vector<int>, vector<vector<int>>, std::greater<vector<int>>> startSet; // effort, row, col
    const vector<vector<int>> directions{{0, 1}, {1, 0}, {-1, 0}, {0, -1}};
    startSet.push({0, 0, 0});
    while (!startSet.empty()) {
        auto current = startSet.top();
        startSet.pop();
        int i = current[1];
        int j = current[2];
        for (auto &dir : directions) {
            int nextI = i + dir[0];
            int nextJ = j + dir[1];
            if (nextI >= 0 && nextI < numOfRow && nextJ >= 0 && nextJ < numOfCol) {
                int curEffort = std::max(std::abs(heights[i][j] - heights[nextI][nextJ]), current[0]); // Current effort is the maximum of the gap value and the existing value
                
                if (curEffort < minEffort[nextI][nextJ]) {
                    minEffort[nextI][nextJ] = curEffort;
                    startSet.push({curEffort, nextI, nextJ});
                }
            }
        }
    }

    return minEffort[numOfRow - 1][numOfCol - 1];
}