//문자열에는 몇 개의 단어가 있을까? 이를 구하는 프로그램을 작성하시오. 
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

/* //맛있는 정답 코드 해석하기
#include <cstdio>
#include <unistd.h>

constexpr int SZ = 1 << 16; // 배열 크기 미리 할당. 쉬프트 연산으로 65536 바이트 크기 정의

int main() {
	char r[SZ], *p = r; read(0, r, SZ); // *p는 r 문자열을 가리키는 포인터. 처음에는 첫번째 가리키는중인듯
	int cnt = 1;
	for (; *p == ' '; p++); //처음이 공백이면 건너뜀
	for (; ; p++) { //배열 메모리는 값이 연속되어 있으므로 포인터 하나씩 증가시키면서 순회중. 
		if (p == r + (SZ)) syscall(0, 0, p = r, SZ);// 64kb 다쓰면 버퍼 비우고 다시 받기, (백만개면 16번정도 받을듯)
		if (*p == '\n') { if (*--p == ' ') cnt--; break; } // 다 받았다!
		if (*p == ' ') cnt++; // 공백 만날때마다 단어 개수 증가시키기
	}
	printf("%d\n", cnt); // 단어 개수 제출
}
*/
