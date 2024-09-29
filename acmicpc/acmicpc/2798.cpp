//블랙잭 만들기
//https://www.acmicpc.net/problem/2798 

#include <iostream>
#include <string>
using namespace std;

int main() {
	int N = 0, M = 0, temp = 0, ans = 0;
	cin >> N >> M;
	int ary[100];

	for (int i = 0; i < N; i++)
	{
		cin >> ary[i];
	}

	for (int i = 0; i < N; i++) //1번째 카드 찾기
	{
		for (int j = i+1; j < N; j++) //2번째 카드 찾기
		{
			for  (int k = j+1; k < N; k++) //3번째 카드 찾기
			{
				temp = ary[i] + ary[j] + ary[k]; //다 더하기
				if (temp <= M && ans < temp) {// 지금까지 찾은 것보다 큰가?
					ans = temp;
				}
			}
		}
	}

	cout << ans;

}
 