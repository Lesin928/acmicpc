//문자열 S를 입력받은 후에, 각 문자를 R번 반복해 새 문자열 P를 만든 후 출력하는 프로그램
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

