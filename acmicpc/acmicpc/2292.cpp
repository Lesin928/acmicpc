//
//https://www.acmicpc.net/problem/2292
#include <iostream> 
using namespace std;

int main() {

	int N = 0, M = 1;
	cin >> N;
	for (int i = 0; ; i++){
		M += i * 6;
		if (N <= M) {
			cout << i+1;
			break;
		}		
	}
}

