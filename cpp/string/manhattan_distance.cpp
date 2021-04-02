#include <iostream>
#include <cassert>
#include <iomanip>
#include <utility>
#include <cmath>
#include <numeric>
#include <vector>
#include <set>
#include <map>
#include <algorithm>
#include <queue>
#include <string>

using namespace std;

typedef long long ll;

#define rep(i, n) for (int i = 0; i < n; i++)

int manhattan_distance(string s1, string s2) {
    assert(s1.size() == s2.size());

    int ret = 0;
    rep(i, s1.size()) {
        if (s1[i] != s2[i]) {
            ret++;
        }
    }

    return ret;
}