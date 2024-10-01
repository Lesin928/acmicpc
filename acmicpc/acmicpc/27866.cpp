//N의 M번째 글자를 출력하는 프로그램을 작성하시오.
//https://www.acmicpc.net/problem/27866
//point1 : 

#include <iostream>
#include <string>

using namespace std;
int main() {
	string S = "";
	unsigned short i = 0;

	cin >> S;
	cin >> i;

	cout << S[i-1];
}

