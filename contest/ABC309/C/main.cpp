#include <iostream>
#include <vector>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using P = pair<int,int>;
using ll = long long;

int main() {
    int n, k;
    cin >> n >> k;
    vector<P> ps;
    ll total = 0;
    rep(i, n) {
        int a, b;
        cin >> a >> b;
        ps.emplace_back(a, b);
        total += b;
    }

    if (total <= k) {
        cout << 1 << endl;
        return 0; 
    }

    sort(ps.begin(), ps.end());
    for (auto [a,b]: ps) {
        total -= b;
        if (total <= k) {
            cout << a+1 << endl;
            return 0;
        }
    }
    return 0;
}