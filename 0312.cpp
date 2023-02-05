#include <bits/stdc++.h>

using namespace std;

int main ()
{
	int t;
	cin >> t;
	while (t--)
	{
		cin.ignore();
		string s;
		getline(cin, s);
		int k, cnt=0, a[200] = {0};
		cin >> k;
		for (int i=0; i<s.size(); i++)
		{
			a[s[i]] = 1;
		}
		for (int i=97; i<123; i++)
		{
			if (a[i] == 0) cnt++;
		}
		if (k >= cnt) cout << 1 << endl;
		else cout << 0 << endl;
	}
}
