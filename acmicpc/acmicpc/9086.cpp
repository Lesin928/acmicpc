//문자열의 첫 글자와 마지막 글자를 출력하는 프로그램
//https://www.acmicpc.net/problem/9086
//point1 : 

#include <iostream>
#include <string>
using namespace std;
int main() {
	string str[10];
	int T;
	cin >> T;

	for (int i = 0; i < T; i++)
		cin >> str[i];	

	for (int i = 0; i < T; i++)
		cout << str[i][0] << str[i][str[i].length() - 1] << endl;
}

