//호텔 방 배정 프로그램
//https://www.acmicpc.net/problem/10250 

#include <iostream> 
using namespace std;

int main() {
	int T, H, W, N;
	cin >> T;
	for (int i = 0; i < T; i++)
	{
		cin >> H >> W >> N;	 
		cout << ((N - 1) / H) + ((N - 1) % H) * 100 + 101 << "\n"; 
	} 
}
 