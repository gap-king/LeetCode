#include "src/utilities/CommonHeaders.hpp"

/**
 * @brief The depth of pool will elevate with time
 */
class SwimInRisingWater {
public:
    int operator()(vector<vector<int>> &grid);

    static vector<vector<int>> GetTestArg(TestCase caseIndx);
};