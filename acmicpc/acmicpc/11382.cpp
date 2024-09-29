//A+B+C�� ���� ���
//https://www.acmicpc.net/problem/11382
//point1 : (1 �� A, B, C �� 10^12) �����̴�.
//point2 : ���� �޸� �Ҵ����� �ڵ带 ������ ����.

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

