#include <string>
#include "PalindromeNumber_9.hpp"

bool PalindromeNumber::ReverseHalfNumber(int x) {
    if (x < 0) {
        return false;
    }
    if (x != 0 && x % 10 == 0) {
        return false;
    }

    int reserved = 0;
    while (reserved < x) {
        reserved = reserved * 10 + x % 10;
        x /= 10;
    }

    if (reserved == x || reserved / 10 == x) {
        return true;
    }

    return false;
}

bool PalindromeNumber::UseString(int x) {
    std::string strX = std::to_string(x);
    for (int i = 0; i < strX.size() / 2; ++i) { // /2?
        if (strX.at(i) != strX.at(strX.size() - 1 - i)) {
            return false;
        }
    }
    return true;
}