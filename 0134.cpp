#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n, k;
		cin >> n >> k;
		int sum=0;
		for (int i=2; i<=n; i++)
		{
			if (n%i==0)
			{
				while(n%i==0)
				{
					sum++;
					if (sum==k) 
					{
						cout << i << endl;
						break;
					}
					n/=i;
				}
			}
//			if (k==0) break;
		}
		if (sum < k) cout << -1 << endl;
//		else cout << n << endl;
	}
}
