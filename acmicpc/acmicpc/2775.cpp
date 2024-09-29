// 
//https://www.acmicpc.net/problem/2775
#include <iostream> 
#include <string> 
using namespace std;
int main() {
	int T = 0;
	cin >> T;

	for (int i = 0; i < T; i++)
	{
		int room[15][15] = { 0 };
		int k = 0, n = 0;
		cin >> k >> n;
		int count = 0;

		for (int j = 0; j < n; j++)
		{
			room[0][j] = j+1;
		}		

		for (int l = 1; l <= k; l++)
		{
			for (int i = 0; i < n; i++)
			{
				for (int j = 0; j <= i; j++)
				{					
					room[l][i] += room[l-1][j];
				}
			}
		} 
		cout << room[k][n-1] << "\n";
	} 
}
 

 
 