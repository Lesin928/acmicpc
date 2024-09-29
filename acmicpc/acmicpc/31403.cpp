// 문자열 더하고 수 뺴기
//https://www.acmicpc.net/problem/31403 

#include <iostream>
#include <string>
using namespace std;
int main() {

	int A, B, C;
	string a, b;

	string str ="";

	cin >> A;
	cin >> B;
	cin >> C;

	a = to_string(A);
	b = to_string(B);
	str = a + b;

	cout << A + B - C << endl;
	cout << stoi(str)-C << endl;
}