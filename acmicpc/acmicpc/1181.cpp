//�ܾ� ����
//https://www.acmicpc.net/problem/1181

//standards 
//class,struct,method PlayerManger;
//int i_age;
//�Լ��� GetAge (���� ���)

//�� ��Ʈ Ȱ���ؼ� Ǫ�� �����ε�, ���ڸ� �̿��� ������ ������ �ϴ� ������.

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool compare(string a, string b) {
	if (a.length() == b.length()) {	// ���̰� ������ 
		return a < b;		// b�� ���������� a ���� ���� ������ �ǰ� ���� (= ���� ������ ����)
	}
	else {					// ���̰� �ٸ���
		return a.length() < b.length();	// b�� ���̰� �� �浵�� ���� (=���̰� ª�� ���� ������)
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
		if (str[i] == str[i - 1]) {	// ���� �ܾ ���� �� �Էµ� ��쿡�� �� ������ ���
			continue;
		}
		cout << str[i] << "\n";
	} 
}

/*

//�Ʒ��� ������ ¥���� �ð����⵵ n^3�� �Ǿ���� ��ģ�ڵ�....
//�ٷ� ��������

string word[20001];
string a;
int N = 0;
string swap(int x, string y);

int main() {
 
	cin >> N;
	for (int i = 1; i <= N; i++) //���� �ܾ��� ���� 
	{	
		cin >> a;
		for (int j = 1; j < i; j++) //������ �迭�� ����
		{ //a ���� �迭 //word[j] ������ �迭
			if (a.length() < word[j].length()) //���°� ���� �񱳴�󺸴� ª��
				a = swap(j, a);
			else if (a.length() == word[j].length()) //���� ���̰� ����
			{
				for (int l = 0; l < a.length(); l++) //�� �ܾ��� ������ ���� �Ǻ�
				{
					if (a[l] < word[j][l])
					{//a�� �� �۴ٸ� ��ȯ
						a = swap(j, a);
						break;
					} 					
				}
			}
		}
		word[i] = a;
	}

	for (int i = 1; i <= N; i++) //���� �ܾ��� ���� 
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