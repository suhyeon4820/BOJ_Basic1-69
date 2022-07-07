#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s;
	int count = 0;
	getline(cin, s);
	for (int i = 0; i < s.size(); i++)
	{
		int temp = (int)s[i];

		if (temp >= 97 && temp<=122)// 소문자
		{
			s[i] = temp >= 110 ? temp - 13 : temp + 13;
		}
		else if(temp>=65 && temp<=90)// 대문자
		{
			s[i] = temp >= 78 ? temp - 13 : temp + 13;
		}
	}
	cout << s;
}

// a ~ z : 97 ~ 122 (26개)
//   a,   b,   c,   d,   e,   f,   g,   h,   i,   j,   k,   l,   m,   n,  o,   p  
//   1,   2,   3,   4,   5,   6,   7,   8,   9,  10,  11,  12,  13,   1,  2,   3,   4,         15,  16    
//  97,  98,  99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, ...   121, 122,
// 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124, 125, 126, ...,  134, 135 
//                                                                   97,  98,  99, 100,       108, 109

// A ~ Z : 65 ~ 90 (26개)