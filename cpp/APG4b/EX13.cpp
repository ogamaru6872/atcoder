#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int N;
  cin >> N;

  vector<int> vec(N);
  for (int i = 0; i < N; i++) {
    cin >> vec.at(i);
  }

  int ave = 0;
  for (int i = 0; i < N; i++) {
    ave += vec.at(i);
  }
  ave = ave / N;
  
  for (int i = 0; i < N; i++) {
    cout << abs(ave - vec.at(i)) << endl;
  }
}