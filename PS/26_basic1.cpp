#include <iostream>
using namespace std;

void Eratosthenes(int m, int n)
{
	bool arr[1000001];
	fill_n(arr, 1000001, true);
	arr[1] = false;
	for (int i = 1; i <= n; i++)
	{
		// 해당수가 소수라면 해당수를 제외한 배수들을 모두 제외
		if (arr[i])
		{
			for (int j = i + i; j <= n; j += i)
			{
				arr[j] = false;
			}
		}
	}
	for (int i = m; i <= n; i++)
	{
		if (arr[i])
			cout << i <<'\n';
	}
}
int main()
{
	int m, n;
	cin >> m >> n;
	Eratosthenes(m, n);
}