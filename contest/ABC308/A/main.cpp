#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<int> vec(8);

  for (int i = 0; i < 8; i++) {
    cin >> vec.at(i);
  }
  
  int value = 0;
  bool flag = true;
  for (int i = 0; i < vec.size(); i++) {
    
    if (value <= vec.at(i)) {
      value = vec.at(i);
    } else {
    	//cout << "No" << endl;
      	flag = false;
      	break;
    }
    
    // 条件２
    if (vec.at(i) < 100) {
    	//cout << "No" << endl;
        flag = false;
      	break;
    }
    
    if (vec.at(i) > 675) {
    	//cout << "No" << endl;
        flag = false;
      	break;
    }
    
    // 条件3
    if (vec.at(i) % 25 != 0) {
    	//cout << "No" << endl;
        flag = false;
      	break;
    }
    
  }
  
  if (flag) {
  	cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }

}
