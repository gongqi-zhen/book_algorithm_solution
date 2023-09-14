#include <iostream>
#include <vector>
using namespace std;
using Graph = vector<vector<int>>;

// DFS
vector<bool> seen;
void dfs(const Graph &G, int v) {
    seen[v] = true;

    for (auto next_v : G[v]) {
        if (seen[next_v]) continue;
        dfs(G, next_v);
    }
}

int main() {
    int N, M, s, t; cin >> N >> M >> s >> t;

    Graph G(N);
    for (int i = 0; i < M; ++i) {
        int a, b;
        cin >> a >> b;
        G[a].push_back(b);
    }

    // 頂点sをスタートとした探索
    seen.assign(N, false); // 全頂点を「未訪問」に初期化
    dfs(N, s);

    // tに辿り着けるかどうか
    if (seen[t]) cout << "Yes" << endl;
    else cout << "No" << endl;
}