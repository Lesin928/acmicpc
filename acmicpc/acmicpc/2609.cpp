//�ִ������� �ּҰ���� ��� ���α׷�
//https://www.acmicpc.net/problem/2609

#include <iostream>
#include <string>
using namespace std;
int main() {  

	int x, y, a, b, r;
	cin >> a >> b;
	x = a;
	y = b;

	while(b != 0) {
		r = a % b;
		a = b;
		b = r;
	}	

	cout << a << "\n" << x * y / a ;
}
 
