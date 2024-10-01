// ������ ������ �־����� ��, �̰��� ascending����, descending����, �ƴϸ� mixed���� �Ǻ��ϴ� ���α׷�
//https://www.acmicpc.net/problem/2920
// 

#include <iostream>
using namespace std;
int main() {
	//c d e f g a b C, 
	//1 2 3 4 5 6 7 8

	int N[8];
	bool ascending = false;
	bool descending = false;

	for (int i = 0; i < 8; i++)
	{
		cin >> N[i];
	}

	for (int i = 1; i < 8; i++)
	{
		if (N[i - 1] < N[i]) {
			ascending = true;
		}
		else if (N[i - 1] > N[i])
		{
			descending = true;
		}
	}

	if (ascending == descending) {
		cout << "mixed";
	}
	else
	{
		if (ascending)
		{
			cout << "ascending";
		}
		else if (descending)
		{
			cout << "descending";
		}
	}
}

