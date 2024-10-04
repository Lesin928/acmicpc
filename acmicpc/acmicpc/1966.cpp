//https://www.acmicpc.net/problem/1966

#include <iostream>  
#include <queue>   
using namespace std; 

int main() { 
	int i_N = 0, i_M = 0, i_testcase, a; 
	cin >> i_testcase;	

	for (int i = 0; i < i_testcase; i++)
	{
		priority_queue <int> q1;
		queue <pair <int,int>> q2;
		int out = 1;
		cin >> i_N >> i_M; 

		for (int j = 0; j < i_N; j++)
		{
			cin >> a; 
			q1.push(a);  
			q2.emplace(j,a);  
		}
		while (!q1.empty())
		{
			if (q2.front().first == i_M && q2.front().second == q1.top())
			{
				cout << out << "\n";
				break;
			}
			else if (q2.front().second < q1.top()) 
			{
				q2.push(q2.front()); 
				q2.pop();
			}
			else if (q2.front().second == q1.top()) 
			{
				q1.pop();
				q2.pop();
				out++;
			}
		}		
	}	
}















