#include<iostream>

using namespace std;

typedef long long ll;

#define rep(i, n) for(int i = 0; i < n; i++)
#define repr(i, a, b) for(int i = a; i < b; i++)

ll gcd(ll a, ll b) {
    if (a < b) {
        swap(a, b);
    }

    while (b != 0) {
        a = a % b;
        swap(a, b);
    }

    return a;
}

ll lcm(ll a, ll b) {
    return a * b / gcd(a, b);
}