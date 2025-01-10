#include <vector>

#include "ClimbingStairs_70.hpp"

using namespace std;

int ClimbingStairs::operator()(int n) {
    if (n == 1) {
        return 1;
    }
    if (n == 2) {
        return 2;
    }

    vector<int> steps(n);
    steps[0] = 1;
    steps[1] = 2;

    for (int i = 2; i < n; ++i) {
        steps[n] = steps[n - 1] + steps[n - 2];
    }
    return steps[n - 1];

}