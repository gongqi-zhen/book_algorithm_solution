#include <iostream>
using namespace std;

int main(){
  int A, B;
  cin >> A >> B;
  
  if (B == 1 || B == 4 || B == 7) {
    cout << "No" << endl;
  } else if (A == 3 || A == 6 || A == 9) {
    cout << "No" << endl;
  } else if (A == 1 && B == 2) {
    cout << "Yes" << endl;
  } else if (A == 2 && B == 3) {
    cout << "Yes" << endl;
  } else if (A == 4 && B == 5) {
    cout << "Yes" << endl;
  } else if (A == 5 && B == 6) {
    cout << "Yes" << endl;
  } else if (A == 7 && B == 8) {
    cout << "Yes" << endl;
  } else if (A == 8 && B == 9) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
  
  return 0;
}