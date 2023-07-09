#include <iostream>
#include <vector>
using namespace std;

int main() {
  
  // 入力の受け取り
  int N, M;
  cin >> N >> M;
  
  vector<string> C(N);
  for (int i = 0; i < N; i++) {
    cin >> C.at(i);
  }
  
  vector<string> D(M);
  for (int i = 0; i < M; i++) {
    cin >> D.at(i);
  }
  
  vector<int> P(M+1);
  for (int i = 0; i < M+1; i++) {
    cin >> P.at(i);
  }
  
  // 計算
  int total = 0;
  
  for (int i = 0; i < N; i++) {
    int count = 0;
    for (int j = 0; j < M; j++) {
      if (C.at(i) == D.at(j)) {
        total += P.at(j+1);
        break;
      } else {
        count++;
      }
      
      if (count == M) {
        total += P.at(0);
      }
    }
  }
  
  cout << total << endl;
}
