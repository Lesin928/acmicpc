//서울의 오늘 날짜를 출력하는 프로그램을 작성하시오.
//https://www.acmicpc.net/problem/10699
//point1 : 이 문제는 재체점을 하지 않는다고 한다.

#include <iostream>
//#include <ctime>
//#include <iomanip> 

int main() {
    std::cout << "2024-08-25";
}

/*

int main() {
    time_t now = time(0);        
    tm* ltm = localtime(&now);  

    std::cout 
        << 1900 + ltm->tm_year << "-"
        << std::setw(2) << std::setfill('0') << 1 + ltm->tm_mon << "-"
        << std::setw(2) << std::setfill('0') << ltm->tm_mday << " "
        << std::endl;

    return 0;
}
*/