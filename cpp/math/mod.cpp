#include <iostream>
#include <cassert>

using namespace std;

typedef long long ll;

#define rep(i, n) for(int i = 0; i < n; i++)
#define repr(i, a, b) for(int i = a; i < b; i++)

template<typename T>
T gcd(T a, T b) {
    if (a < b) {
        swap(a, b);
    }

    while (b != 0) {
        a = a % b;
        swap(a, b);
    }

    return a;
}

template<typename T>
T lcm(T a, T b) {
    return a * b / gcd(a, b);
}

template<typename T>
pair<T, T> ext_euclid(T a, T b) {
    // 元々正の数に関するライブラリだったので暫定措置
    if (a < 0 || b < 0) {
        assert(false);
    }
    assert(gcd(a, b) == 1);

    pair<T, T> ret;
    if (b == 1) {
        return pair<T, T>(0, 1);
    }

    T q = a / b;
    T r = a % b;

    pair<T, T> next = ext_euclid<T>(b, r);

    return pair<T, T>(next.second, next.first - q * next.second);
}