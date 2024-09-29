//소수 찾기
//https://www.acmicpc.net/problem/1978  
#include <iostream>
using namespace std;
bool isPrime(int num);

int main() {
	
	int N = 0, count = 0; //소수가 아닌 것 갯수
	cin >> N;
	int* ary = new int[1000];
	for (int i = 0; i < N; i++)
	{
		cin >> ary[i]; //2
		if (isPrime(ary[i])) {
			count++;
		}
	}
	cout << count;
}

bool isPrime(int num) {
	if (num <= 1) return false;
	if (num == 2 || num == 3) return true;
	if (num % 2 == 0 || num % 3 == 0) return false;

	for (int i = 5; i * i <= num; i += 6) {
		if (num % i == 0 || num % (i + 2) == 0) return false;
	}

	return true;
}

