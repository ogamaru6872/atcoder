#include <bits/stdc++.h>
#include <iterator>

using namespace std;
 
int main() {
  int N;
  cin >> N;

  vector<int> A(N), B(N);
  for (int i = 0; i < N; i++) {
    cin >> A.at(i);
  }
  list<int> D;
  int input_num = 0;
  for (int i = 0; i < N; i++) {
    input_num = A.at(i);
    D.push_back(input_num);
    // cout << "list size is " << D.size() << ", input_num is " << input_num << endl;
    if (D.size()< input_num) {
      // cout << "list size is too short!" << endl;
    } else {
      int count = 0;
      for (int k = 0; k < input_num; k++) {
        // cout << "k is " << k << ", list is " << *next(D.begin(), D.size() - k - 1) << endl;
        if (*next(D.begin(), D.size() - k - 1) != input_num) {
          // cout << "not equal!!!" << endl;
          break;
        } else {
          // cout << "equal" << endl;
          count++;
        }
      }
      if (count == input_num) {
        // cout << "all equal!!" << endl;
        for(int k = 0; k < input_num; k++) {
          D.pop_back();
        }
      }
    }
    B.at(i) = D.size();
  }

  for (int i = 0; i < N; i++) {
    cout << B.at(i) << endl;
  }
}