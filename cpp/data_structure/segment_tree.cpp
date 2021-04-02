#include <iostream>
#include <vector>

using namespace std;

typedef long long ll;

#define rep(i, n) for (int i = 0; i < n; i++)
#define repr(i, a, b) for (int i = a; i < b; i++)
#define vec_all(vec) vec.begin(), vec.end()

template<typename T>
struct SegmentTree
{
    vector<T> tree_vals;
    // 葉の枚数
    int size;
    // 単位元
    int inf;

    // constructor
    // segment tree化したい配列, 単位元(INF)
    SegmentTree(vector<T> vals, T inf) : inf(inf)
    {
        size = 1;
        while (true) {
            size *= 2;

            if (size >= vals.size()) {
                break;
            }
        }

        tree_vals = vector<T> (size * 2 - 1, inf);
        rep(i, size) {
            update(i, vals[i]);
        }
    }

    void update(int index, T value) {
        index += size - 1;
        tree_vals[index] = value;

        while(index > 0) {
            // parent_node
            index = (index - 1) / 2;
            tree_vals[index] = min(tree_vals[index * 2 + 1], tree_vals[index * 2 + 2]);
        }
    }

    // [a, b)の[l, r)内の最小値を再帰的に計算
    T query(int a, int b, int index, int l, int r) {
        if (b <= l || a >= r) {
            return inf;
        }

        if (a <= l && b >= r) {
            return tree_vals[index];
        }

        T lhs = query(a, b, 2 * index + 1, l, (l + r) / 2);
        T rhs = query(a, b, 2 * index + 2, (l + r) / 2, r);

        return min(lhs, rhs);
    }

    T calc(int a, int b) {
        return query(a, b, 0, 0, size);
    }
};
