#include "ContainerWithMostWater_11.hpp"

int ContainerWithMostWater::Solve(const std::vector<int> &height) {
    int minIdx = 0;
    int maxIdx = height.size() - 1;
    int maxVal = -1;
    while (minIdx < maxIdx) {
        int curHeight = std::min(height.at(minIdx), height.at(maxIdx));
        if ((maxIdx - minIdx) * curHeight > maxVal) {
            maxVal = (maxIdx - minIdx) * curHeight;
        }
        if (height.at(minIdx) <= height.at(maxIdx)) {
            ++minIdx;
        } else {
            --maxIdx;
        }
    }
    return maxVal;

}