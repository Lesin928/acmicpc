//https://www.acmicpc.net/problem/11651

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL); 

	int i_N, x, y;
	vector<pair<int, int>> v;
	
	cin >> i_N;

	for (int i = 0; i < i_N; i++)
	{
		cin >> y >> x;
		v.push_back(pair<int, int>(x,y));
	}
	sort(v.begin(), v.end());
	for (int i = 0; i < i_N; i++)
	{
		cout << v[i].second << " " << v[i].first << "\n";
	}
}















