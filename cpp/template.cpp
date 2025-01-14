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
typedef pair<int, int> p_i;

#define rep(i, n) for(ll i = 0LL; i < n; i++)
#define repext(i, a, b) for (ll i = a; i < b; i++)
#define reprev(i, n) for (ll i = n - 1; i >= 0; i--)
#define repextrev(i, a, b) for (ll i = b - 1; i >= a; i--)

#define repv(v, values) for (auto v : values)

#define vec_all(vec) vec.begin(), vec.end()
#define sum(vec) accumulate(vec_all(vec), 0LL)
#define srt(vec) sort(vec_all(vec))
#define rev(vec) reverse(vec_all(vec))
#define revsrt(vec) srt(vec); rev(vec)

// vectorデバッグ
template<typename T>
void dump_vec(vector<T> vec) {
    rep(i, vec.size()) {
        cout << i << ": " << vec[i] << endl;
    }
}

template<typename T, typename S>
void dump_dic(map<T, S> dic) {
    for (auto v : dic) {
        cout << v.first << ": " << v.second << endl;
    }
}

// --- notice ---
// intの和はllにしろ

int main() {
    return 0;
}