//나이순 정렬 
//https://www.acmicpc.net/problem/10814

//원래의 순서를 손상시키지 않으면서 정렬하는것을 stable sort라고 한다.
#include <iostream>
#include <string>
#include <algorithm>
using namespace std; 

struct person
{
    int age, idx;
    string name; //int로 바꿔주면 오류 안남
};

bool compare(const person& now, const person& last)
{
    if (now.age != last.age) return now.age < last.age;
    return now.idx < last.idx;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;
    person people[100001];  

    for (int i = 0; i < N; i++)  
    {
        cin >> people[i].age >> people[i].name;
        people[i].idx = i;
    } 
    sort(people, people + N, compare); 
    for (int i = 0; i < N; i++)
        cout << people[i].age << " " << people[i].name << "\n";
}