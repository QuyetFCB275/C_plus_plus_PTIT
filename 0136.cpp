#include <bits/stdc++.h>

using namespace std;

int dk(long n)
{
	if (n==1) return 0;
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
		long long a;
		cin >> a;
		long a1 = sqrt(a);
		int cnt=0;
		for (long i=2; i<=a1; i++) 
		{
			if (dk(i)) cnt++;
		}
		cout << cnt << endl;
	}
}