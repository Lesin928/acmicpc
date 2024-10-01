//이항계수
//https://www.acmicpc.net/problem/11050
#include <iostream>
using namespace std;

int main() {
	int N, K, result = 1;
	cin >> N >> K; 

	if (K > N - K)
		K = N - K; 
	for (int i = 1; i <= K; i++)
	{
		result *= (N - i + 1); 
		result /= i;
	} 
	cout << result; 
}
 
