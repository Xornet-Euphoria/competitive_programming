#include <iostream>
#include <vector>

using namespace std;

typedef long long ll;

#define rep(i, n) for (int i = 0; i < n; i++)
#define repr(i, a, b) for (int i = a; i < b; i++)
#define vec_all(vec) vec.begin(), vec.end()

struct UnionFind
{
    vector<int> parent;
    // 葉からの高さ
    vector<int> rank;

    UnionFind(int n) {
        parent = vector<int> (n);
        rank = vector<int> (n);
        rep(i, n) {
            parent[i] = i;
            rank[i] = 0;
        }
    }

    int root(int index) {
        if (parent[index] == index) {
            return index;
        } else {
            return root(parent[index]);
        }
    }

    void unite(int a, int b) {
        int a_root = root(a);
        int b_root = root(b);
        if (rank[a_root] < rank[b_root]) {
            parent[a_root] = b_root;
        } else if (rank[a_root] > rank[b_root]) {
            parent[b_root] = a_root;
        } else {
            parent[a_root] = b_root;
            rank[b_root]++;
        }
    }

    bool same_root(int a, int b) {
        return root(a) == root(b);
    }
};