#include <iostream>
using namespace std;

int main()
{
	int t;
	cin >> t;

	while (t--)
	{
		string s;
		cin >> s;
		int sum = 0;
		for (int i = 0; i < s.size(); i++)
		{
			if (s[i] == '(')
				sum++;
			else
				sum--;

			if (sum < 0)
				break;
		}
		if (sum == 0)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
}

