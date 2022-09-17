#include <iostream>
#include <vector>

using namespace std;

int main ()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n, m;
		cin >> n >> m;
		int a[n+5][m+5], h[1000], c[1000];
		for (int i=0; i<n; i++)
		{
			for (int j=0; j<m; j++)
			{
			    cin >> a[i][j];
			    if (a[i][j]==1)
			    {
				    h[i]=1;
				    c[j]=1;
			    }	
			}
		}
		for (int i=0; i<n; i++)
		{
			for (int j=0; j<m; j++)
			{
				if (h[i]==1 || c[j]==1) cout << "1 ";
				else cout << "0 ";
			}
			cout << endl;
		}
	}
}
