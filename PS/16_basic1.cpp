#include <iostream>
using namespace std;
// a : 97 ~ 122
int main()
{
	int arr[26];
	fill_n(arr, 26, -1);

	string s;
	cin >> s;

	for (int i = 0; i < s.size(); i++)
	{
		int num = (int)s[i] - 97;
		if(arr[num]==-1)
			arr[num] = i;
	}
	for (int i = 0; i < 26; i++)
	{
		cout << arr[i] << " ";
	}
}