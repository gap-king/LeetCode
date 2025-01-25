#include <queue>
#include <utility>

#include "SwimInRisingWater_778.hpp"

using std::pair;
using MaxHeap = std::priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>, std::greater<pair<int, pair<int, int>>>>;

void Search(int i, int j, int curVal, vector<vector<int>> &grid, vector<vector<int>> &arrived, vector<vector<int>> &added, MaxHeap &searchPoints)
{
    // boundary
    if (i < 0 || j < 0 || i == grid.size() || j == grid[0].size()) {
        return;
    }
    // have found the answer
    if (arrived[grid.size() - 1][grid[0].size() - 1]) {
        return;
    }
    // have found that point
    if (arrived[i][j]) {
        return;
    }
    // put into heap
    if (grid[i][j] > curVal && !added[i][j]) {
        added[i][j] = 1;
        searchPoints.push({grid[i][j], {i, j}});
    } else if (grid[i][j] <= curVal) { // Search up down left right
        arrived[i][j] = 1;
        Search(i + 1, j, curVal, grid, arrived, added, searchPoints);
        Search(i - 1, j, curVal, grid, arrived, added, searchPoints);
        Search(i, j + 1, curVal, grid, arrived, added, searchPoints);
        Search(i, j - 1, curVal, grid, arrived, added, searchPoints);
    }
    return;
}

int SwimInRisingWater::operator()(vector<vector<int>> &grid)
{
    MaxHeap searchPoints;

    // We need a flag to indicate whether a point has been added into the queue.
    vector<vector<int>> added(grid.size(), vector<int>(grid[0].size(), 0));
    // We need a flag to indicate whether a point has been found.
    vector<vector<int>> arrived(grid.size(), vector<int>(grid[0].size(), 0));
    searchPoints.push({grid[0][0], {0, 0}});
    added[0][0] = 1;
    
    int t = 0;
    while (!arrived[grid.size() - 1][grid[0].size() - 1]) {
        int curVal = searchPoints.top().first;
        int i = searchPoints.top().second.first;
        int j = searchPoints.top().second.second;
        Search(i, j, curVal, grid, arrived, added, searchPoints);
        t = curVal;
        searchPoints.pop();
    }
    return t;
}

vector<vector<int>> SwimInRisingWater::GetTestArg(TestCase caseIdx)
{
    switch (caseIdx) {
        case TestCase::one:
            return 
            {{0,2}, 
            {1,3}};
        case TestCase::two:
            return
            {
            {0, 1, 2, 3, 4},
            {24, 23, 22, 21, 5},
            {12, 13, 14, 15, 16},
            {11, 17, 18, 19, 20},
            {10, 9, 8, 7, 6}
            };
        default:
            return vector<vector<int>>();
    }
}
