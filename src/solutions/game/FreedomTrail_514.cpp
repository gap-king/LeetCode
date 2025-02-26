#include <queue>

#include "FreedomTrail_514.hpp"

std::pair<string, string> FreedomTrail::GetTestArg(TestCase caseIdx)
{
    switch (caseIdx) {
        case TestCase::one:
            return {"godding", "gd"};
        case TestCase::two:
            return {"godding", "godding"};
        // need reverse
        case TestCase::three:
            return {"abcde", "ade"};
        // reveal that this problem is not about local optimum
        case TestCase::four:
            return {"iotfo", "fioot"};
        // The right answer is 137
        case TestCase::five:
            return {"caotmcaataijjxi", "oatjiioicitatajtijciocjcaaxaaatmctxamacaamjjx"};
        default:
            return {};
    }
}

int FreedomTrail::operator()(const string &ring, const string &key)
{
    const int rSize = ring.size();
    const int kSize = key.size();

    vector<vector<int>> dp(kSize, vector<int>(rSize, std::numeric_limits<int>::max()));
    vector<vector<int>> cPos(26, vector<int>()); // 26 means 26 characters

    for (int i = 0; i < rSize; ++i) {
        cPos[ring[i] - 'a'].push_back(i);
    }

    for (int i : cPos[key[0] - 'a']) {
        dp[0][i] = std::min(i, rSize - i) ;
    }

    for (int i = 1; i < kSize; ++i) {
        for (int j : cPos[key[i] - 'a']) {
            for (int k : cPos[key[i - 1] - 'a']) {
                dp[i][j] = std::min(dp[i][j], dp[i - 1][k] + std::min(std::abs(j - k), rSize - std::abs(j - k)) + 1);
            }
        }
    }

    return *std::min_element(dp[kSize - 1].begin(), dp[kSize - 1].end());
}

// Wrong method
using MinPQ = std::priority_queue<std::pair<int, int>, vector<std::pair<int, int>>, std::greater<>>;

void FindNearestChar(const string &ring, const char &c, MinPQ &pq)
{
    MinPQ tmpPQ;
    while (!pq.empty()) {
        auto cur = pq.top();
        pq.pop();
        int steps = cur.first;
        int idx = cur.second;

        int clockwiseDis = 0;
        size_t clockwiseIdx = ring.find(c, idx);
        if (clockwiseIdx == string::npos) { // No c found
            size_t secondTurnIdx = ring.find(c, 0);
            clockwiseIdx = secondTurnIdx;
            clockwiseDis = ring.size() - 1 - idx + secondTurnIdx + 1; //  = clockwiseIdx - idx + ring.size()
        } else {
            clockwiseDis = clockwiseIdx - idx;
        }
        
        int anticlockwiseDis = 0;
        size_t anticlockwiseIdx = ring.rfind(c, idx);
        if (anticlockwiseIdx == string::npos) { // No c found
            size_t secondTurnIdx = ring.rfind(c, ring.size() - 1);
            anticlockwiseIdx = secondTurnIdx;
            anticlockwiseDis = idx + (ring.size() - 1 - secondTurnIdx) + 1; // = idx - anticlockwiseIdx + ring.size()
        } else {
            anticlockwiseDis = idx - anticlockwiseIdx;
        }
    
        if (clockwiseDis == 0) { // stay in place
            tmpPQ.push({steps + 1, idx});
            continue;
        }

        if (clockwiseDis < anticlockwiseDis) {
            tmpPQ.push({steps + clockwiseDis + 1, clockwiseIdx});
        } else if (clockwiseDis > anticlockwiseDis) {
            tmpPQ.push({steps + anticlockwiseDis + 1, anticlockwiseIdx});
        } else { // clockwiseDis == anticlockwiseDis
            tmpPQ.push({steps + clockwiseDis + 1, clockwiseIdx});
            tmpPQ.push({steps + anticlockwiseDis + 1, anticlockwiseIdx});
        }
    }
    pq = std::move(tmpPQ);
    return;
}