#include <unordered_map>

#include "LongestSubstrWithoutRepeating_3.hpp"

int LongestSubstrWithoutRepeating::operator()(const string &s)
{
    std::unordered_map<char, uint32_t> char2Idx;
    
    int first = 0;
    int second = 0;
    int res = 0;

    while (second < s.size()) {
        // Do not need to delete elements between new and old first.
        if (!char2Idx.count(s[second]) || char2Idx[s[second]] < first) {
            char2Idx[s[second]] = second;
        } else {
            res = std::max(res, second - first);
            first = char2Idx[s[second]] + 1;
            char2Idx[s[second]] = second;  
        }
        ++second;
    }
    res = std::max(res, second - first);
    return res;
}

string LongestSubstrWithoutRepeating::GetTestArg(TestCase caseIdx)
{
    switch (caseIdx) {
        case TestCase::one:
            return "abcabcbb";
        case TestCase::two:
            return "bbbbb";
        case TestCase::three:
            return "pwwkew";
        default:
            return string();
    }
}