#include "ShortestReturnRoad.hpp"

string ShortestReturnRoad::GetTestArg(TestCase caseIdx)
{
    switch (caseIdx) {
        // Output WWSSSE
        case TestCase::one:
            return "NEENWN";
        // Output ESSSSSW
        case TestCase::two:
            return "NWNENWNEN";
        // Output WSSSSEEE
        case TestCase::three:
            return "NENENWWWWN";
        // Output WWWWSSSSSSSEEEE
        case TestCase::four:
            return "NEENWWWWNEEEEENWWWWWWNEEEEEEENWWWWN";
        default:
            return "";
    }
}

string ShortestReturnRoad::operator()(const string &forth)
{
    int rightmostX = 0; // The rightmost x that path can arrive. [0, num]
    int leftmostX = 0; // The leftmost x that path can arrive [num, 0]
    int offsetX = 0; // The actual distance in x traveled from start to end
    int y = 0; // The actual distance in y traveled from start to end

    for (auto &c : forth) {
        if (c == 'N') {
            ++y;
        } else if (c == 'E') {
            ++offsetX;
            rightmostX = std::max(rightmostX, offsetX);
        } else if (c == 'W') {
            --offsetX;
            leftmostX = std::min(leftmostX, offsetX);
        }
    }

    // key: always plus 1 from the max point
    int rightPath = (rightmostX + 1) * 2 - offsetX; // 2 means round
    int leftPath = -((leftmostX - 1) * 2 - offsetX); // use - because the result is definitely negative

    // Select the shortest path
    if (rightPath < leftPath) {
        return string(rightPath + rightmostX - 1, 'E') + string(y, 'S') + string(rightmostX + 1, 'W');
    } else {
        return string(leftPath + leftmostX - 1, 'W') + string(y, 'S') + string(-(leftmostX - 1), 'E');
    }
}