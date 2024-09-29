//ÆÓ¸°µå·Ò¼ö
//https://www.acmicpc.net/problem/1259

#include <iostream>
#include <string>
using namespace std;
int main() {  

	string n;	
	bool palindrome = true;

	cin >> n;
	do	{
		palindrome = true;
		for (int i = 1; i <= n.length() / 2; i++)
		{
			if (n[i-1] != n[n.length() - i])
			{
				palindrome = false;
				break;
			}
		}

		if (palindrome)
		{
			cout << "yes" << "\n";
		}
		else
		{
			cout << "no" << "\n";
		}

		cin >> n;
	} while (n[0] != '0');

}