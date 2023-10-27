#include<bits/stdc++.h>
using namespace std;

int main () {
  int N,X,Y;
  cin >> N >> X >> Y;

  int count = 0;
  for(int i = 1; i <= N; i++) {
    if(i % X == 0 || i % Y == 0) count++;
  }

  cout << count << endl;
  return 0;
}

