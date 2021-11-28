#include <bits/stdc++.h>
using namespace std;

int main() {
  // int A, B, C;
  // cin >> A >> B >> C;
  int N = 3;
  vector<int> vec(N);
  for (int i = 0; i < N; i++) {
    cin >> vec.at(i);
  }
  sort(vec.begin(), vec.end());
  cout << vec.back() - vec.front() << endl;
}
