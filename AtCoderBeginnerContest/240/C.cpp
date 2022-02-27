#include <bits/stdc++.h>
using namespace std;

 
int main() {
  int N, X;
  cin >> N >> X;

  vector<int> A(N), B(N);
  for (int i = 0; i < N; i++) {
    cin >> A.at(i) >> B.at(i);
  }
  int vec_num = N * X + 1;
  // cout << "vec_num:" << vec_num << endl;
  vector<int> C(vec_num, 0);

  if (A.at(0) < X + 1) {
    C.at(A.at(0)) = 1;
  }
  if (B.at(0) < X + 1) {
    C.at(B.at(0)) = 1;
  }
  // cout << "initialize ok" << endl;
  int num = 1;
  for (int i = 1; i < N; i++) {
    vector<int> temp_vec(vec_num, 0);
    for (int k = 0; k < vec_num; k++) {
      if (C.at(k) == 1) {
        // cout << "C.at(" << k << ")" << endl;
        if (k + A.at(i) < X + 1) {
          temp_vec.at(k + A.at(i)) = 1;
        }
        if (k + B.at(i) < X + 1) {
          temp_vec.at(k + B.at(i)) = 1;
        }
        // cout << "OK" << endl;
      }
    }
    for (int k = 0; k < vec_num; k++) {
      C.at(k) = temp_vec.at(k);
      // cout << "num:" << k <<", "<<"value:" << C.at(k)<< endl; 
    }
  }

  if (C.at(X) == 1) {
    cout << "Yes" << endl;
  }
  else {
    cout << "No" << endl;
  }
}