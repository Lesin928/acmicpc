//. ������ ���ĺ��� ���ؼ�, �ܾ ���ԵǾ� �ִ� ��쿡�� ó�� �����ϴ� ��ġ��, ���ԵǾ� ���� ���� ��쿡�� -1�� ����ϴ� ���α׷�
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

