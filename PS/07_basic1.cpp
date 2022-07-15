#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main()
{
	queue<int> que;
	vector<int> result;
	int n, k;
	cin >> n >> k;

	for (int i = 1; i <= n; i++)
	{
		que.push(i);
	}

	while (que.size() != 1)
	{
		// n번 실행
		for (int i = 0; i < k; i++)
		{
			// 맨앞 제거
			if (i == k-1)
			{
				int first = que.front();
				que.pop();
				result.push_back(first);
			}
			else
			{
				// 맨앞 값을 뒤에 넣어주기
				int first = que.front();
				que.pop();
				que.push(first);
			}
		}
	}
	int first = que.front();
	result.push_back(first);

	cout << "<";
	for (int i = 0; i < result.size()-1; i++)
	{
		cout << result[i] << ", ";
	}
	cout<< result[result.size()-1]<< ">";
}

// 7, 3
//  -----------------------
//  1, 2, 3, 4, 5, 6, 7
//  2, 3, 4, 5, 6, 7, 1
//  4, 5, 6, 7, 1, 2    - 3
//  -----------------------
//  5, 6, 7, 1, 2, 4
//  6, 7, 1, 2, 4, 5
//  7, 1, 2, 4, 5       - 6
//  -----------------------
//  1, 2, 4, 5, 7
//  2, 4, 5, 7, 1
//  4, 5, 7, 1          - 2
//  -----------------------
//  5, 7, 1, 4
//  7, 1, 4, 5
//  1, 4, 5             - 7
//  -----------------------
//  4, 5, 1
//  5, 1, 4
//  1, 4                - 5
//  -----------------------
//  4, 1
//  1, 4
//  4                   - 1
//  -----------------------
//  4