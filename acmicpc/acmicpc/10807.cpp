//총 N개의 정수가 주어졌을 때, 정수 v가 몇 개인지 구하는 프로그램
//https://www.acmicpc.net/problem/10807
//point1 : 

#include <iostream>
using namespace std;
int main() {

	short N,V,count = 0;	
	cin >> N;
	short *arr = new short[N];

	for (int i = 0;  i < N; i++)
	{
		cin >> arr[i];	
	}
	cin >> V;
	for (int i = 0; i < N; i++)
	{
		if (arr[i] == V)
			count++;
	}
	cout << count;
}

