#include <bits/stdc++.h>

using namespace std;

int main ()
{
	int n;
	cin >> n;
	cin.ignore();
	string s[n+5];
	int cnt=0;
	for (int i=0; i<n; i++) 
	{
		getline(cin, s[i]);
	}
	for (int i=0; i<n; i++) 
	{
		if (s[i] != "0") cnt++;
		for (int j=i+1; j<n; j++)
		{
			if (s[j] == s[i]) s[j] = "0";
		}
	}
	cout << cnt;
}
