#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	int tc;
	cin >> tc;

	while (tc--)
	{
		string s;
		cin >> s;

		for (int i = 0; i+4 < s.length(); i++)
		{
			if (s.substr(i, 5) == "party")
			{
				s[i + 2] = 'w';
				s[i + 3] = 'r';
				s[i + 4] = 'i';
			}
		}
		cout << s << endl;

	}

	return 0;
}


