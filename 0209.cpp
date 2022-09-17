#include <iostream>
#include <vector>

using namespace std;

int main ()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n, q;
		cin >> n >> q;
		int a[n+5];
		for (int i=1; i<=n; i++) cin >> a[i];
		while (q--)
		{
			int sum=0;
			int n, m;
			cin >> n >> m;
			for (int i=n; i<=m; i++) sum+=a[i];
			cout << sum << endl;
		}
	}
}
