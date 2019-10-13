#include<iostream>
#include<vector>

using namespace std;

typedef long long ll;

#define rep(i, n) for(int i = 0; i < n; i++)
#define repext(i, a, b) for(int i = a; i < b; i++)

template<typename T>

vector<T> accum_sum(vector<T> a) {
    T l = a.size();
    vector<T> ret(l);

    ret[0] = a[0];

    repext(i, 1, l) {
        ret[i] = a[i] + ret[i - 1];
    }

    return ret;
}