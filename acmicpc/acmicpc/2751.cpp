//�� �����ϱ� 2 
//https://www.acmicpc.net/problem/2751

//standards 
//class,struct,method PlayerManger;
//int i_age;
//�Լ��� GetAge (���� ���)
 
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int a[1000000];

int main() {

	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	sort(a, a + n);

	for (int i = 0; i < n; i++) {
		cout << a[i] << "\n";
	} 
}
 