//대문자는 소문자로, 소문자는 대문자로 바꾸어 출력하는 프로그램
//https://www.acmicpc.net/problem/2744
//point1 : 

#include <iostream>
using namespace std;
int main() {
	string str = "";
	cin >> str;
	for (int i = 0; i < str.length(); i++)
	{
		if ('A' <= str[i] && str[i] <= 'Z')
		{
			str[i] += 32;
		}
		else
		{
			str[i] -= 32;
		}
	}
	cout << str;
}

