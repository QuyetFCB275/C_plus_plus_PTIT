#include <bits/stdc++.h>

using namespace std;

int solve(string s, int a)
{
	int cnt=0;
	for (int i=0; i<s.size(); i++)
	{
		int kq=0;
		for (int j=i; j<s.size(); j++)
		{
			kq = kq * 10 + s[j] - '0';
			kq %= a;
			if (kq == 0) cnt++;
		}
	}
	return cnt;
}

int main ()
{
	int t;
	cin >> t;
	cin.ignore();
	while (t--)
	{
		string s;
		cin >> s;
		cout << solve(s, 4) << endl;
	}
}
