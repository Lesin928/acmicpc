//A+B+C의 값을 출력
//https://www.acmicpc.net/problem/11382
//point1 : (1 ≤ A, B, C ≤ 10^12) 범위이다.
//point2 : 동적 메모리 할당으로 코드를 개선해 보자.

/*#include <iostream>
#include <sstream>  
#include <string>
using namespace std;

int main() { 
    string input;
    getline(std::cin, input);

    istringstream stream(input);
    long long number;
    long long sum = 0;
    while (stream >> number) {
        sum += number;
    }

    cout << sum << endl;
}*/

#include <iostream>
#include <memory>

using namespace std;

int main(){
    unique_ptr<long long int> num1 = make_unique<long long int>();
    unique_ptr<long long int> num2 = make_unique<long long int>();
    unique_ptr<long long int> num3 = make_unique<long long int>();

    cin >> *num1 >> *num2 >> *num3;

    cout << (*num1) + (*num2) + (*num3) << endl;
}

