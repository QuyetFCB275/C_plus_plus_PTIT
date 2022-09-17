#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int m, n, a, b;
		cin >> m >> n >> a >> b;
		if (m > n) 
		{
			int x=m;
			    m=n;
			    n=x;
		}
		int sum=0;
		for (int i=m; i<=n; i++)
		{
			if (i%a==0 || i%b==0) sum++; 
		}
		cout << sum << endl;
	}
}
