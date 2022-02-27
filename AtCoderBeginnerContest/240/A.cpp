#include <iostream>
 
using namespace std;
 
int main() {
  int A, B;
  cin >> A >> B;
  if (B - A == 1) {
    cout << "Yes" << endl;
  }
  else if ((A == 1) && (B == 10)) {
    cout << "Yes" << endl;
  }
  else {
    cout << "No" << endl;
  }
}