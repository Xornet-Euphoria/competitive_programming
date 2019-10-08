#include <iostream>
#include <iomanip>
#include <utility>
#include <cmath>
#include <numeric>
#include <vector>
#include <set>
#include <algorithm>
#include <string>

using namespace std;

typedef long long ll;

#define rep(i, n) for(int i = 0; i < n; i++)
#define repr(i, a, b) for(int i = a; i < b; i++)

long gcd(long a, long b) {
    if (a < b) {
        swap(a, b);
    }

    while (b != 0) {
        a = a % b;
        swap(a, b);
    }

    return a;
}

long lcm(long a, long b) {
    return a * b / gcd(a, b);
}

int main() {
    return 0;
}