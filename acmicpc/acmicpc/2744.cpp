//�빮�ڴ� �ҹ��ڷ�, �ҹ��ڴ� �빮�ڷ� �ٲپ� ����ϴ� ���α׷�
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

