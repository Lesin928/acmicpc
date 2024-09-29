//숫자를 모두 합해서 출력하는 프로그램
//https://www.acmicpc.net/problem/11720
//point1 : 

#include <iostream>
#include <string>

using namespace std;
int main() {
    int N, result = 0;
	cin >> N;	
    string str;
    cin >> str;

    for (int i = 0; i < str.length(); i++)
    {
        result += str[i] - '0';
    }
    cout << result;
}





