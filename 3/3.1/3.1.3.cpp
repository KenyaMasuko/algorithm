#include<bits/stdc++.h>
using namespace std;

int main () {
  long long N;
  cin >> N;

  for(long long i = 0; i * i < N; i++)  {
    if(N%i != 0)  continue;

    cout << i << endl;
    if(i != N / i) {
      cout << N / i << endl;
    }
  }
  return 0;
}
