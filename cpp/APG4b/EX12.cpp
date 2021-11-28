#include <bits/stdc++.h>
using namespace std;
 
int main() {
  string S;
  cin >> S;
  int result = 1;
  for (int i = 0; i < S.size(); i++){
    if (S.at(i) == '+') {
      result++;
    }
    else if (S.at(i) == '-') {
      result--;
    }
  }
  cout << result << endl;
  // ここにプログラムを追記
}