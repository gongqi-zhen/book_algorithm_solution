#include <iostream>
using namespace std;
int main() {
    int a, b;
    cin >> a >> b;
    if (a%3 != 0 && a+1 == b) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}