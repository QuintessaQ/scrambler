#include "util.h"

#include <cassert>

int cs5150::charToInt(char const c) {
    assert((c >= '0' && c <= '9') || (c >= 'A' && c <= 'Z'));
    if (c >= '0' && c <= '9') {
        return c - '0';
    } else {
        return 10 + (c - 'A');
    }
}

char cs5150::intToChar(int const i) {
    assert(i >= 0 && i <= 35);
    if (i < 10) {
        return static_cast<char>('0' + i);
    } else {
        return static_cast<char>('A' + (i - 10));
    }
}

int cs5150::mod36(int const i) {
    assert(i >= -35 && i <= 70);
    if (i < 0) {
        return i + 36;
    } else if (i > 35) {
        return i - 36;
    } else {
        return i;
    }
}
