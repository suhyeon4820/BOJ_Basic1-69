#include <iostream>
using namespace std;
// a : 97 ~ 122
int main()
{
	int arr[26] = { 0 };

	string s;
	cin >> s;

	for (int i = 0; i < s.size(); i++)
	{
		int num = (int)s[i] - 97;
		arr[num]++;
	}
	for (int i = 0; i < 26; i++)
	{
		cout << arr[i] << " ";
	}
}