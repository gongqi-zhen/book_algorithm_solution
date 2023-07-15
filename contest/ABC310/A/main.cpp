#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, P, Q;
    cin >> N >> P >> Q;
    vector<int> D(N);
    for (int i = 0; i < N; i++) {
        cin >> D.at(i);
    }

    int discount = P - Q;
    int min_value = 100000;
    for (int i = 0; i < N; i++){
        if (min_value > D.at(i)) min_value = D.at(i);
    }

    int total = 0;
    if (discount > min_value) {
        total = Q + min_value;
    } else {
        total = P;
    }

    cout << total << endl;

    return 0;
}