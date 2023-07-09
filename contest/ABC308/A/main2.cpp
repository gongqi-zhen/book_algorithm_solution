#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> s(8);
    for (int &i: s) cin >> i;
    for (int i = 0; i < 8; i++) {
        if (i < 7 and s[i] > s[i+1]) {
            cout << "No" << endl;
            return 0;
        }

        if (s[i] < 100 or s[i] > 675 or s[i] % 25 != 0) {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    return 0;
}