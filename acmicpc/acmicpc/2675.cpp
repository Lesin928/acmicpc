//���ڿ� S�� �Է¹��� �Ŀ�, �� ���ڸ� R�� �ݺ��� �� ���ڿ� P�� ���� �� ����ϴ� ���α׷�
//https://www.acmicpc.net/problem/2675 

#include <iostream>
#include <string>
using namespace std;
int main() {
	string S;
	string str = "";
	int T = 0, R = 1;
	cin >> T;

	while (T--) {
		cin >> R >> S;

		for (int j = 0; j < S.length(); j++)
		{
			for (int i = 0; i < R; i++)
			{
				str += S[j];
			}
		}
		str += "\n";
	}

	cout << str;
}

