//달팽이는 올라가고 싶다
//https://www.acmicpc.net/problem/2869
#include <iostream>
using namespace std; 

int main() {

	long long A, B, V, count = 0;
	cin >> A >> B >> V;
	if (V == A) {
		cout << 1;
	}
	else if ((V - A) % (A - B) > 0) {
		cout << (V - A) / (A - B) + 2;
	}
	else
	{
		cout << (V - A) / (A - B) + 1;
	} 
}
