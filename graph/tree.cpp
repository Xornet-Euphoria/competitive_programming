#include <vector>
#include <queue>

using namespace std;

typedef long long ll;
typedef pair<int, int> p_i;

#define rep(i, n) for (ll i = 0LL; i < n; i++)
#define repext(i, a, b) for (ll i = a; i < b; i++)
#define reprev(i, n) for (ll i = n - 1; i >= 0; i--)
#define repextrev(i, a, b) for (ll i = b - 1; i >= a; i--)

#define repv(v, values) for (auto v : values)

#define vec_all(vec) vec.begin(), vec.end()
#define sum(vec) accumulate(vec_all(vec), 0LL)
#define srt(vec) sort(vec_all(vec))
#define rev(vec) reverse(vec_all(vec))
#define revsrt(vec) \
    srt(vec);       \
    rev(vec)

struct Tree
{
    int n; // 頂点数
    int root;
    vector<vector<int>> graph;
    vector<int> parent;
    vector<int> rank;

    // 1-origin
    Tree(vector<p_i> edges, int root = 0) {
        n = edges.size() + 1;
        graph = vector<vector<int>>(n + 1, vector<int>());
        parent = vector<int>(n + 1, 0);
        rank = vector<int>(n + 1, 0);
        repv(v, edges) {
            graph[v.first].push_back(v.second);
            graph[v.second].push_back(v.first);
        }

        if (root != 0) {
            queue<int> que;
            que.push(root);
            vector<int> child;
            int current;
            while (que.size() > 0) {
                current = que.front();
                que.pop();
                child = graph[current];
                repv(v, child) {
                    if (rank[v] == 0) {
                        rank[v] = rank[current] + 1;
                        parent[v] = current;
                        que.push(v);
                    }
                }
            }
        }
    }

    template<typename T, class Fn>
    vector<T> bfs(vector<T> data, Fn f , int start = root) {
        queue<int> que;
        que.push(start);
        vector<int> child;
        int current;
        vector<bool> done(n + 1, false);
        done[start] = true;
        while (que.size() > 0) {
            current = que.front();
            que.pop();
            child = graph[current];
            repv(v, child) {
                if (!done[v]) {
                    f(current, v, data);
                    que.push(v);
                }
            }
        }
        return vector<T>();
    }
};