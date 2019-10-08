#include<iostream>

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