//���ڿ����� �� ���� �ܾ ������? �̸� ���ϴ� ���α׷��� �ۼ��Ͻÿ�. 
//https://www.acmicpc.net/problem/1152

#include <iostream>
#include <string>
using namespace std;
int main() { 
	string str;
	getline(cin, str);
	int word = 1;

	for (int i = 0; i < str.length(); i++)
	{
		if (str[i] == ' ' && i != 0 && i != (str.length())-1) {
			word++;
		}		
	}

	if (str != " ")
	{
		cout << word;
	}
	else
	{
		cout << 0;
	}
	
}

/* //���ִ� ���� �ڵ� �ؼ��ϱ�
#include <cstdio>
#include <unistd.h>

constexpr int SZ = 1 << 16; // �迭 ũ�� �̸� �Ҵ�. ����Ʈ �������� 65536 ����Ʈ ũ�� ����

int main() {
	char r[SZ], *p = r; read(0, r, SZ); // *p�� r ���ڿ��� ����Ű�� ������. ó������ ù��° ����Ű�����ε�
	int cnt = 1;
	for (; *p == ' '; p++); //ó���� �����̸� �ǳʶ�
	for (; ; p++) { //�迭 �޸𸮴� ���� ���ӵǾ� �����Ƿ� ������ �ϳ��� ������Ű�鼭 ��ȸ��. 
		if (p == r + (SZ)) syscall(0, 0, p = r, SZ);// 64kb �پ��� ���� ���� �ٽ� �ޱ�, (�鸸���� 16������ ������)
		if (*p == '\n') { if (*--p == ' ') cnt--; break; } // �� �޾Ҵ�!
		if (*p == ' ') cnt++; // ���� ���������� �ܾ� ���� ������Ű��
	}
	printf("%d\n", cnt); // �ܾ� ���� ����
}
*/
