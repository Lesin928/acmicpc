//요세푸스 문제 0
//https://www.acmicpc.net/problem/11866

#include <iostream>
#include <string> 
#include <queue> 
using namespace std;

int main() {
   
	ios::sync_with_stdio(false);
	cin.tie(NULL); 

	queue<int> q; 
	int i_N, i_K;

	cin >> i_N >> i_K;	

	for (int i = 1; i <= i_N; i++)
	{ 
		q.push(i);		
	}
	
	cout << "<";

	for (int i = 1; i <= i_K; i++)
	{
		if (i < i_K)
		{
			q.push(q.front());
			q.pop();
		}	
		else if (i == i_K)
		{			
			cout << q.front();
			q.pop();

			i = 0;

			if (q.empty())
				break;
			else
				cout << ", ";			
		}
	}	

	cout << ">";
}















