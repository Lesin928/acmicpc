//단어 정렬
//https://www.acmicpc.net/problem/1181

//standards 
//class,struct,method PlayerManger;
//int i_age;
//함수명 GetAge (동사 명사)

//퀵 솔트 활용해서 푸는 문제인데, 인자를 이용해 사전적 정렬을 하는 문제다.

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool compare(string a, string b) {
	if (a.length() == b.length()) {	// 길이가 같으면 
		return a < b;		// b가 사전순으로 a 보다 다음 순서가 되게 정렬 (= 사전 순으로 정렬)
	}
	else {					// 길이가 다르면
		return a.length() < b.length();	// b의 길이가 더 길도록 정렬 (=길이가 짧은 것이 앞으로)
	}
}

int main() {
	string str[20001];

	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> str[i];
	}

	sort(str, str + n, compare);

	for (int i = 0; i < n; i++) {
		if (str[i] == str[i - 1]) {	// 같은 단어가 여러 번 입력된 경우에는 한 번씩만 출력
			continue;
		}
		cout << str[i] << "\n";
	} 
}

/*

//아래는 무작정 짜보니 시간복잡도 n^3이 되어버린 미친코드....
//바로 버려주자

string word[20001];
string a;
int N = 0;
string swap(int x, string y);

int main() {
 
	cin >> N;
	for (int i = 1; i <= N; i++) //넣은 단어의 갯수 
	{	
		cin >> a;
		for (int j = 1; j < i; j++) //비교중인 배열의 차례
		{ //a 비교할 배열 //word[j] 비교중인 배열
			if (a.length() < word[j].length()) //들어온개 지금 비교대상보다 짧다
				a = swap(j, a);
			else if (a.length() == word[j].length()) //둘이 길이가 같다
			{
				for (int l = 0; l < a.length(); l++) //두 단어의 사전적 순서 판별
				{
					if (a[l] < word[j][l])
					{//a가 더 작다면 교환
						a = swap(j, a);
						break;
					} 					
				}
			}
		}
		word[i] = a;
	}

	for (int i = 1; i <= N; i++) //넣은 단어의 갯수 
	{
		cout << word[i] << "\n";
		if (i < N) 
			if (word[i] == word[i+1]) 
				i++;		
	}
} 


string swap(int x, string y)
{// y = a  
	word[0] = word[x];
	word[x] = y;
	return word[0];
}

*/