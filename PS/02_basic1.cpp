#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main()
{
	int n;
	cin >> n;
	cin.ignore();
	for (int i = 0; i < n; i++)
	{
		string s;
		string s1;
		stack<char> _s;
		getline(cin, s);
		for (int i = 0; i < s.size() + 1; i++)
		{
			if (s[i] == ' ' || i == s.size())
			{
				while (_s.size())
				{
					s1.push_back(_s.top());
					_s.pop();
				}
				s1.push_back(' ');
			}
			else
			{
				_s.push(s[i]);
			}
			
		}
		cout << s1 << endl;
	}
}