#include <bits/stdc++.h>

using namespace std;

int main ()
{
	string s, s1;
	getline(cin, s);
	getline(cin, s1);
	stringstream ss(s);
	string tmp;
	while (ss >> tmp)
	{
		if (tmp != s1) cout << tmp << " ";
	}
}
