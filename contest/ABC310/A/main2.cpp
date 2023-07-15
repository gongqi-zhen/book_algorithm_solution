#include <iostream>
using namespace std;

int main() {
    int n, p, q;
    cin >> n >> p >> q;

    int d_min = 1000000000, d;
    for (int i = 1; i <= n; i++) {
        cin >> d;
        d_min = min(d, d_min);
    }

    cout << min(p, q+d_min) << endl;

    return 0;
}