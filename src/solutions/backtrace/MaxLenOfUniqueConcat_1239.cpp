#include <unordered_set>
#include "MaxLenOfUniqueConcat_1239.hpp"

vector<string> MaxLenOfUniqueConcat::GetTestArg(TestCase caseIdx)
{
    switch (caseIdx) {
        case TestCase::zero:
            return {"co", "dil", "ityz"};
        case TestCase::one:
            return {"abc", "yyy", "def", "csv"};
        case TestCase::two:
            return {"potato", "kayak", "banana", "racecar"};
        case TestCase::three:
            return {"eva", "jqw", "tyn", "jan"};
        case TestCase::four:
            return {"abcdefghijklmnopqrstuvwxyz"};
        default:
            return {};
    }
}

int MaxLenOfUniqueConcat::operator()(const vector<string> &arr)
{
    int maxLength = 0;
    // Use std::bitset to keep some determined information (such as 26 characters) is faster than hash table.
    std::bitset<26> str(0);
    Backtrack(str, 0, arr, maxLength);
    return maxLength;
}

void MaxLenOfUniqueConcat::Backtrack(std::bitset<26> curStr, int strIdx, const vector<string> &arr, int &maxLength)
{
    // Stop recursion
    if (strIdx == arr.size()) {
        return;
    }
    // It's crucial to use tmp to store original str in case it can not be concatenated.
    std::bitset<26> tmp = curStr;
    for (auto &c : arr[strIdx]) {
        if (curStr[c - 'a']) {
            curStr = tmp;
            break;
        }
        curStr[c - 'a'] = 1;
    }

    if (tmp.count() != curStr.count()) { // concatenate successfully
        Backtrack(curStr, strIdx + 1, arr, maxLength);
    }
    // We just skip current str (no matter can't concatenate or just want to) to use previous str to go on our search journey.
    Backtrack(tmp, strIdx + 1, arr, maxLength);
    maxLength = std::max(maxLength, static_cast<int>(curStr.count()));
    return;
}
