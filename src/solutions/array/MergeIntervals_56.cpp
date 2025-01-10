#include <algorithm>
#include "MergeIntervals_56.hpp"

using namespace std;

vector<vector<int>> MergeIntervals::operator()(vector<vector<int>> &intervals) {
    std::sort(intervals.begin(), intervals.end(), [](const auto &a, const auto &b) { return a.front() < b.front(); });

    vector<vector<int>> res;

    vector<int> preInterval = intervals[0];
    for (int i = 1; i < intervals.size(); ++i) {
        int preEnd = preInterval.at(1);
        const vector<int> &curInterval = intervals.at(i);
        if (preEnd < curInterval.at(0)) {
            res.push_back(preInterval);
            preInterval = curInterval;
        } else if (preEnd >= curInterval.at(0) && preEnd <= curInterval.at(1)) {
            preInterval.at(1) = curInterval.at(1);
        }
    }
    res.push_back(preInterval);

    return res;

}
