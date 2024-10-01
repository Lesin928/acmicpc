//오름차순하기
//https://www.acmicpc.net/problem/10989

#include <iostream>
using namespace std;
 
int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N,T;	
	cin >> N;
	int ary[10001] = { 0 };

	for (int i = 1; i <= N; i++)
	{
		cin >> T;
		ary[T] += 1;
	}	

	for (int i = 1; i <= 10000; i++)
	{
		for (int j = 1; j <= ary[i]; j++)
		{
			cout << i << "\n";
		}
	}
}  

//오늘 배운거 : endl는 출력버퍼를 비워줘야 하므로 느림
//for문 돌릴때 조건에 수식은 되도록 뺴자 (그때마다 연산해야함)

//ios::sync_with_stdio(false);
//cin.tie(NULL);
//위 코드는 입출력 문제에 무조건 넣자...