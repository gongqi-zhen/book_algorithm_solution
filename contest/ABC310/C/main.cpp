#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

int main(void) {
    int n;
    cin >> n;

    int ans = 0;
    set<string> T;
    string s;

    for (int i = 1; i <= n; i++) {
        cin >> s;
        if (T.count(s) == 0) ans++;
        T.insert(s);
        reverse(s.begin(), s.end());
        T.insert(s);
    }

    cout << ans << endl;

    return 0;
}