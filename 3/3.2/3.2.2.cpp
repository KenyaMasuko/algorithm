#include<bits/stdc++.h>
using namespace std;

int main () {
  int A,B;
  cin >> A >> B;

  while(A >= 1 && B >= 1) {
    if(A > B) A = A % B;
    else B = B % A;
  }

  if(A == 0) {
    cout << B << endl;
    return 0;
  }
  
  cout << A << endl;
  return 0;
}
