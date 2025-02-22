#include <bitset>

#include "src/utilities/CommonHeaders.hpp"

/**
 * @details Use backtrace with bitset
 * @remark Synopsys (No.1 of 3), Tesla
 */
class MaxLenOfUniqueConcat {
public:
    int operator()(const vector<string> &arr);

    static vector<string> GetTestArg(TestCase caseIdx);
private:
    void Backtrack(std::bitset<26> curStr, int strIdx, const vector<string> &arr, int &maxLength);
};