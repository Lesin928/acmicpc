//3�� ���� ���̷� �ش� �簢���� �����簢������ �˾Ƴ��� ���α׷�
//https://www.acmicpc.net/problem/4153

#include <iostream> 
using namespace std;
int main() {  
	int a, b, c;
	
	while(1) {
		cin >> a >> b >> c;
		if (a + b + c == 0)
			break;
		if ((a * a + b * b == c * c) || (a * a + c * c == b * b) || (b * b + c * c == a * a)) 
			cout << "right\n";		
		else		
			cout << "wrong\n";		
	}
}	
