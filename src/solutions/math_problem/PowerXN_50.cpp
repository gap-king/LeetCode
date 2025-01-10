#include "PowerXN_50.hpp"


double Multiply(const double x, const long long n) {
    if (n == 1) {
        return x;
    }
    if (n % 2) {
        // Note: C++ compiler will not optimize this type of call which means two independent calls at each level of recursion
        // Optimize:
        // double half = Multiply(x, n / 2); // Compute once
        // if (n % 2) {
        //     return half * half * x; // Use stored result
        // } else {
        //     return half * half; // Use stored result
        // }
        return Multiply(x, n / 2) * Multiply(x, n / 2) * x;
    } else {
        return Multiply(x, n / 2) * Multiply(x, n / 2);
    }
}

double PowerXN::operator()(const double x, const int n) {
    if (n == 0) {
        return 1;
    }
    long long newN = n;
    double res = 0;
    if (newN < 0) {
        res = Multiply(1 / x, -newN);
    } else {
        res = Multiply(x, newN);
    }
    
    return res;
}
