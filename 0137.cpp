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
		long long a, b;
		cin >> a >> b;
		long a1 = sqrt(a), b1 = sqrt(b);
//		if (a1^2 != a) a1++;
//		if (b1^2 != b) b1++;
		int cnt=0;
		for (long i=a1; i<=b1; i++) 
		{
			if (dk(i)) cnt++;
		}
		cout << cnt << endl;
	}
}
