//평점은 몇 점인지 출력하는 프로그램
//https://www.acmicpc.net/problem/2754
//point1 : 

#include <iostream>
#include <string>
using namespace std;
int main() {
	string str;
	float num = 69.0;
	cin >> str;

	if (str[0] < 69.0) {
		num -= str[0];
		switch (str[1])
		{
		case '+':
			num += 0.3;
			break;
		case '-':
			num -= 0.3;
			break;
		case '0':
			num /= 1.0;
			break;
		default:
			break;
		}
	}
	else
		num = 0.0;

	cout << fixed;
	cout.precision(1);
	cout << num;
}

