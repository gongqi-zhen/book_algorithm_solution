#include <iostream>
#include <vector>
using namespace std;
using Graph = vector<vector<int>>;

// 深さ優先探索
vector<bool> seen;
void dfs(const Graph &G, int v) {
    seen[v] = true; // vを訪問済みにする

    // vから行ける各頂点　next_v について
    for (auto next_v : G[v]) {
        if (seen[next_v]) continue; // next_vが訪問済だったらスルー
        dfs(G, next_v); //再帰的に探索
    }
}

int main() {
    // 頂点数と辺数
    int N, M; cin >> N >> M;

    // グラフ入力受け取り（無効グラフを想定)
    Graph G(N);
    for (int i = 0; i < M; ++i) {
        int a, b;
        cin >> a >> b;
        G[a].push_back(b);
        G[b].push_back(a);
    }

    // 頂点0をスタートとした探索
    seen.assign(N, false); // 全頂点を「未訪問」に初期化
    dfs(G, 0);
}