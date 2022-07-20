#include <iostream>
using namespace std;

// 유클리드 호제법
// 1980, 168  -> 1980 =  168  * 11 + 132
//  168, 132  ->  168 =  132  *  1 + 36
//  132, 36   ->  132 =   36  *  3 + 24
//   36, 24   ->   36 =   24  *  1 + 12
//   24, 12   ->   24 =   12  *  2 + 0

int gcd(int a, int b)
{
	int c;
	while (b != 0)
	{
		c = a % b;
		a = b;
		b = c;
	}
	return a;
}

int main()
{
	int a, b;
	cin >> a >> b;

	int x = gcd(a, b);
	cout << x << endl;
	cout << (a * b) / x << endl;
}