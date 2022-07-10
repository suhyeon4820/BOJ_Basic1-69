#include <iostream>
using namespace std;

int main()
{
	int n;
	int num = 1;
	cin >> n;

	for (int i = n; i > 0; i--)
	{
		num *= i;
	}
	cout << num;
}