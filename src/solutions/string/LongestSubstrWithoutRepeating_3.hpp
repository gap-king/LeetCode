#include "src/utilities/CommonHeaders.hpp"


/**
 * @details
 * Using two tools, double pointer and hash table, based on logic: when the first repeated character is found,
 * the length of the substring between the two pointers is the longest of any combination of the two.
 */
class LongestSubstrWithoutRepeating {
public:
    int operator()(const string &s);

    static string GetTestArg(TestCase caseIdx);
};