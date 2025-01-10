#include <algorithm>
#include <limits>
#include <unordered_map>
#include <unordered_set>

#include "NetworkDelayTime_743.hpp"

using namespace std;

void StepForward(int curStart, const unordered_map<int, vector<int>> &startMap, vector<int> &minTime, const std::vector<std::vector<int>>& times, int n, int k) {
    if (startMap.count(curStart)) {
        auto &endPointsIdx = startMap.at(curStart);
        int curMinTime = std::numeric_limits<int>::max();
        for (auto &curEndIdx : endPointsIdx) { // 2 → 3, 4, 5
            int curEnd = times[curEndIdx][1] - 1; // current end point
            int currentTime = minTime[curStart] + times[curEndIdx].back();
            int &exsistingTime = minTime[curEnd];
            if (currentTime < exsistingTime) { // 当前路径小于已有路径
                exsistingTime = currentTime; // update time from start to current end
            }
        }
    }
}

int NetWorkDelayTime::operator()(const std::vector<std::vector<int>>& times, int n, int k) {
    unordered_map<int, vector<int>> startMap; // store start point index in times
    for (int i = 0; i < times.size(); ++i) {
        // no loop
        startMap[times[i].front() - 1].push_back(i);
    }

    vector<int> minTime(n, std::numeric_limits<int>::max()); // from start to end
    minTime[k - 1] = 0;
    vector<int> done(n, 0);

    while (1) {
        int start = -1;
        for (int i = 0; i < n; ++i) {
            if (!done[i] && (start < 0 || minTime[i] < minTime[start])) {
                start = i;
            }
        }
        if (start == -1) {
            return *std::max_element(minTime.begin(), minTime.end());
        }
        if (minTime[start] == std::numeric_limits<int>::max()) {
            return -1;
        }

        done[start] = 1;
        StepForward(start, startMap, minTime, times, n, k); 
    }
}

// int NetWorkDelayTime::operator()(const std::vector<std::vector<int>>& times, int n, int k) {
//     vector<vector<int>> dis(n, vector<int>(n, std::numeric_limits<int>::max() / 2)); // max / 2 refers to no path
//     for (int i = 0; i < times.size(); ++i) {
//         dis[times[i][0] - 1][times[i][1] - 1] = times[i][2];
//     }

//     vector<int> minDis(n, std::numeric_limits<int>::max() / 2);
//     minDis[k - 1] = 0;
//     vector<int> done(n, 0);

//     // all map to all in each loop
//     while (1) {
//         int start = -1;
//         for (int i = 0; i < n; ++i) {
//             if (!done[i] && (start < 0 || minDis[i] < minDis[start])) {
//                 start = i;
//             }
//         }

//         if (start == -1) {
//             return *std::max_element(minDis.begin(), minDis.end());
//         }
//         if (minDis[start] == std::numeric_limits<int>::max() / 2) {
//             return -1;
//         }

//         done[start] = 1;

//         for (int end = 0; end < n; ++end) {
//             minDis[end] = std::min(minDis[end], dis[start][end] + minDis[start]);
//         }
//     }

//     return 0;
// }