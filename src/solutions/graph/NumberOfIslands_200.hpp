#include "src/utilities/CommonHeaders.hpp"

/** @brief Find islands that are connected with '1'
 *  @details When you understand recursion and how to use it in practice, this problem is so easy to solve
 */
class NumberOfIslands {
public:
    int operator()(vector<vector<char>> &grid);

    static vector<vector<char>> GetTestArg(TestCase caseIdx);

};