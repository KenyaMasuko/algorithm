#include<bits/stdc++.h>
using namespace std;

// Nで商品の数を定義し、その数の分だけ100,200,300,400それぞれの数の入力を受け取る
int main() {
  long long N;
  long long A[200009];
  long long a = 0, b = 0, c = 0, d = 0; // オーバーフロー回避のため 64 ビット整数を使う

	// 入力
	cin >> N;
	for (int i = 1; i <= N; i++) cin >> A[i];
	
	// a, b, c, d の個数を数える
	for (int i = 1; i <= N; i++) {
		if (A[i] == 100) a += 1;
		if (A[i] == 200) b += 1;
		if (A[i] == 300) c += 1;
		if (A[i] == 400) d += 1;
	}
	
	// 出力（答えは a * d + b * c）
	cout << a * d + b * c << endl;
	return 0;
}
