#include <iostream>
 
using namespace std;
 
int main() {
  int N, A;
  cin >> N >> A;
  string op[N];
  int B[N];
  for (int i = 0; i < N; i++){
    cin >> op[i] >> B[i];
  }
  int ans = A;
  for (int i = 0; i < N; i++){
    if (op[i] == "+") {
      ans = ans + B[i];
    }
    else if (op[i] == "-") {
      ans = ans - B[i];
    }
    else if (op[i] == "*") {
      ans = ans * B[i];
    }
    else if (op[i] == "/") {
      if (B[i] == 0) {
        cout << "error" << endl;
        break;
      }
      else {
        ans = ans / B[i];
      }
    }
    else if (op[i] == "?" || "=" || "!") {
      cout << "error" << endl; 
      break;
    }
    cout << i + 1 << ":" << ans << endl;
  }
  // ここにプログラムを追記
}