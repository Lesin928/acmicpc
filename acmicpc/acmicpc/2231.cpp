//ºÐÇØÇÕ
//https://www.acmicpc.net/problem/2231


#include <iostream>
#include <string>
using namespace std; 


int main() {   
	int num;
	cin >> num;
	 
	for (int i = 1; i < num; i++) {
		int tmp = i;
		int sum = i;

		while (tmp != 0) {
			sum += tmp % 10;  
			tmp /= 10;
		}

		if (sum == num) {
			cout << i; 
		}
	}

	cout << 0; 
}
