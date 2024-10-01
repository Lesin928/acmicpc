//좌표 정렬하기
//https://www.acmicpc.net/problem/11650 

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
		cin >> x >> y;
		v.push_back(pair<int, int>(x,y));
	}
	sort(v.begin(), v.end());
	for (int i = 0; i < i_N; i++)
	{
		cout << v[i].first << " " << v[i].second << "\n";
	}
}















