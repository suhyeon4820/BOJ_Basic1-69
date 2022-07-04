#include <iostream>

using namespace std;

int main()
{
	int n;
	int index = 0;
	int stack[10000];
	string s;
	
	cin >> n;
	while (n--)
	{
		cin >> s;
		int result = 0;
		if (s == "push")
		{
			int num;
			cin >> num;
			stack[++index] = num;
		}
		else if(s=="pop")
		{
			result = index <= 0 ? -1 : stack[index--];
			cout << result << endl;
		}
		else if (s == "size")
		{
			cout << index << endl;
		}
		else if (s == "empty")
		{
			result = index <= 0 ? 1 : 0;
			cout << result << endl;
		}
		else if (s == "top")
		{
			result = index <= 0 ? -1 : stack[index];
			cout << result << endl;
		}

	}
}