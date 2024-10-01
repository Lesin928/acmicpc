//Hashing
//https://www.acmicpc.net/problem/15829 
#include <iostream>
#include <string> 
using namespace std; 
 
int main() {
	
	int L;
	long long M = 1234567891; 
	long long hash = 0, temp = 0, num = 1;
	string a; 
	cin >> L >> a;

	for (int i = 0; i < L; i++)
	{ 
		temp = (a[i] - 96);
		hash = (hash + temp * num) % M;		
		num = (num * 31) % M;
	}

	cout << hash;
} 