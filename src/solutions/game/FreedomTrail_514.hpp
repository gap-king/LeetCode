#include <utility>

#include "src/utilities/CommonHeaders.hpp"

class FreedomTrail {
public:
    static std::pair<string, string> GetTestArg(TestCase caseIdx);

    // Find rotate steps
    int operator()(const string &ring, const string &key);
};