#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<string> S(N);
    for (int i = 0; i < N; i++) {
        cin >> S.at(i);
    }

    // unique
    sort(S.begin(), S.end());
    S.erase(unique(S.begin(), S.end()), S.end());

    int dup = 0;
    for (int i = 0; i < S.size(); i++) {
        for (int j = i + 1; j < S.size(); j++) {
            if (S.at(i).length() != S.at(j).length()) continue;

            reverse(S.at(j).begin(), S.at(j).end());
            if (S.at(i) == S.at(j)) dup++;
        }
    }

    cout << S.size() - dup << endl;

    return 0;
}