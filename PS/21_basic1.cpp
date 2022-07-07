#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	string s;
	vector<string> v;
	cin >> s;
	int num = s.size();
	
	for (int i = 0; i < num; i++)
	{
		v.push_back(s.substr(i, num));
	}
	sort(v.begin(), v.end());

	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i] << endl;
	}
}