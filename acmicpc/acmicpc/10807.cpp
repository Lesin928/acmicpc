//�� N���� ������ �־����� ��, ���� v�� �� ������ ���ϴ� ���α׷�
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

