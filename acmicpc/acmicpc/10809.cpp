//. 각각의 알파벳에 대해서, 단어에 포함되어 있는 경우에는 처음 등장하는 위치를, 포함되어 있지 않은 경우에는 -1을 출력하는 프로그램
//acmicpc.net/problem/10809

#include <iostream>
#include <string>
using namespace std;
int main() {

	string S;
	cin >> S; 

	int alpha[26];
	fill_n(alpha, 26, -1);

	for (int i = 0; i < S.length(); i++)
	{
		if (alpha[(S[i] - 97)] == -1) {
			alpha[(S[i] - 97)] = i;
		}		
	}
	for (int i = 0; i < 26; i++)
	{
		cout << alpha[i] << " ";
	}

}

