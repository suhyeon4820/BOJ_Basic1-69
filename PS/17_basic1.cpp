#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s;
	while (getline(cin, s))
	{
		int upper = 0;
		int lower = 0;
		int space = 0;
		int number = 0;

		for (int i = 0; i < s.size(); i++)
		{
			if (s[i] == ' ')
			{
				space++;
			}
			else if (s[i] >='a' && s[i] <= 'z') 
			{
				lower++;
			}
			else if (s[i] >= 'A' && s[i] <= 'Z') 
			{
				upper++;
			}
			else
			{
				number++;
			}
		}
		cout << lower << " " << upper << " " << number << " " << space << endl;
	}
	
}