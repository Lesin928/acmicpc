//���������ϱ�
//https://www.acmicpc.net/problem/10989

#include <iostream>
using namespace std;
 
int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N,T;	
	cin >> N;
	int ary[10001] = { 0 };

	for (int i = 1; i <= N; i++)
	{
		cin >> T;
		ary[T] += 1;
	}	

	for (int i = 1; i <= 10000; i++)
	{
		for (int j = 1; j <= ary[i]; j++)
		{
			cout << i << "\n";
		}
	}
}  

//���� ���� : endl�� ��¹��۸� ������ �ϹǷ� ����
//for�� ������ ���ǿ� ������ �ǵ��� ���� (�׶����� �����ؾ���)

//ios::sync_with_stdio(false);
//cin.tie(NULL);
//�� �ڵ�� ����� ������ ������ ����...