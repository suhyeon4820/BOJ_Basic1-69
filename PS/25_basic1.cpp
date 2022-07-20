#include <iostream>
#include <vector>
using namespace std;

int Eratosthenes(int n)
{
	bool arr[1001];
	// 배열 true로 초기화
	for (int i = 0; i <= n; i++)
	{
		arr[i] = true;
	}
	arr[1] = false;
	for (int i = 2; i <= n; i++)
	{
		// 해당수가 소수라면 해당수를 제외한 배수들을 모두 제외
		if (arr[i])
		{
			for (int j = i * 2; j <= n; j += i)
			{
				arr[j] = false;
			}
		}
	}
	int result = arr[n] ? 1 : 0;
	return result;
}
int main()
{
	int n, sum = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int a;
		cin >> a;
		sum += Eratosthenes(a);
	}
	cout << sum;
}