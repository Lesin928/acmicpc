//N*Mũ���� �� ��� A�� B�� �־����� ��, �� ����� ���ϴ� ���α׷�
//https://www.acmicpc.net/problem/2738
//point1 : 

#include <iostream>
using namespace std;
int main() {

	short N,M, count = 0;	
	cin >> N >> M;
	int arr[100][100];

	for (int i = 0; i < 2*N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			if (i < N) {
				cin >> arr[i][j];
			}
			else
			{
				cin >> count;
				arr[i - N][j] += count;
			}
		}		
	}

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
}

