#include <bits/stdc++.h>

using namespace std;

int dk(int n)
{
	for (int i=2; i<=sqrt(n); i++)
	{
		if (n%i==0) return 0;
	}
	return 1;
}

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		n=sqrt(n);
		for (int i=2; i<=n; i++) 
		{
			if (dk(i)) cout << i*i << " ";
		}
		cout << endl;
	}
}