#include "src/solutions/graph/NumberOfIslands_200.hpp"

void ExpandIsland(int i, int j, vector<vector<char>> &grid)
{
    if (i < 0 || j < 0 || i == grid.size() || j == grid[0].size() || grid[i][j] == '0') {
        return;
    }
    grid[i][j] = '0';
    ExpandIsland(i + 1, j, grid);
    ExpandIsland(i - 1, j, grid);
    ExpandIsland(i, j + 1, grid);
    ExpandIsland(i, j - 1, grid);

    return;
}

int NumberOfIslands::operator()(vector<vector<char>> &grid)
{
    // vector<vector<int>> find(grid.size(), vector<int>(grid[0].size(), 0));

    int res = 0;
    for (int i = 0; i < grid.size(); ++i) {
        for (int j = 0; j < grid[0].size(); ++j) {
            if (grid[i][j] == '1') {
                ExpandIsland(i, j, grid);
                ++res;
            }
        }
    }
    return res;
}

vector<vector<char>> NumberOfIslands::GetTestArg(TestCase caseIdx)
{
    switch (caseIdx) {
        case TestCase::one:
            return
            {{'1','1','0','0','0'},
            {'1','1','0','0','0'},
            {'0','0','1','0','0'},
            {'0','0','0','1','1'}};
        case TestCase::two:
            return 
            {{'1','1','0','0','0'},
            {'1','1','0','0','0'},
            {'0','0','1','0','0'},
            {'0','0','0','1','1'}};
        default:
            return vector<vector<char>>();
    }

}