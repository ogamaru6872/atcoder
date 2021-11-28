#include <iostream>
 
using namespace std;

int main() {
  float L = 50.0f;
  int N = 100;
  float A[N];
  int i= 0;
  while(i<N){
    A[i] = i * L / N;
    i++;
  }
  i= 0;
  while(i<N){
    cout << A[i] <<endl;
    i++;
  }
}