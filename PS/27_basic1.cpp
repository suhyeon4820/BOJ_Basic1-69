#include <iostream>

using namespace std;

int arr[1000001];

void Eratosthenes()
{
	int n = 1000000;
	fill_n(arr, 1000001, 1);
	arr[1] = 0;
	for (int i = 2; i*i <= n; i++)
	{
		if (arr[i])
		{
			for (int j = i + i; j <= n; j += i)
			{
				arr[j] = 0;
			}
		}
	}
}

void FindResult(int n)
{
	int a=-1, b=-1;
	for (int i = 3; i <= n/2; i++)
	{
		a = i;
		b = n - a;
		if (arr[a]!=0 && arr[b]!=0)
		{
			cout << n << " = " << a << " + " << b << '\n';
			break;
		}
	}
}

int main()
{
	Eratosthenes();

	// 시간 초과 해결
	cin.tie(NULL);
	ios_base::sync_with_stdio(0);

	while (true)
	{
		int n = -1;
		cin >> n;
		if (n == 0)
		{
			break;
		}
		FindResult(n);
	}
}