//ù° �ٿ� A��B�� ����� ���
//https://www.acmicpc.net/problem/15964 

#include <iostream>
#include <cmath>
using namespace std;

long long ap(long long x, long long y); 
int main() {
    long long A, B;
    cin >> A >> B;
    cout << ap(A, B);
}

long long ap(long long x, long long y) { 
    return (x * x) - (y * y);
}