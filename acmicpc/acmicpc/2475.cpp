//첫째 줄에 검증수를 출력한다.  
//https://www.acmicpc.net/problem/2475 

#include <iostream>
using namespace std;

int ckeck(int a, long b, int c, int d, int e);

int main() {

	int a, b, c, d, e;
	cin >> a >> b >> c >> d >> e;
	cout << ckeck(a, b, c, d, e);
}
int ckeck(int a, long b, int c, int d, int e) {
	return ((a * a) + (b * b) + (c * c) + (d * d) + (e * e)) % 10;
}