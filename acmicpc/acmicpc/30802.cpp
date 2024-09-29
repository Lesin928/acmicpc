//웰컴키트 갯수 구하기
//https://www.acmicpc.net/problem/30802

#include <iostream>
#include <string>
using namespace std;
int main() { 

	long long N, T, P;
	long long size[6];
	int count = 0;
	cin >> N;

	for (int i = 0; i < 6; i++) 
		cin >> size[i];
	
	cin >> T >> P ;

	for (int i = 0; i < 6; i++) {
		count += size[i] / T;
		if (size[i] % T != 0)
			count++;		
	}

	cout << count << "\n" << N/P << " " << N % P;
	
}
