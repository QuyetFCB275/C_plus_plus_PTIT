#include <iostream>
#include <vector>

using namespace std;

vector<int> v;

int main ()
{
	int t;
	cin >> t;
	while (t--)
	{
		long n;
		cin >> n;
		long a[n+5];
		v.resize(1000000);
		for (int i=0; i<n; i++) 
		{
			cin >> a[i];
			if (a[i] > 0) v[a[i]]=1;
		}
		for (int i=1; i<100000; i++)
		{
			if (v[i]!=1) 
			{
				cout << i << endl;
				break;
			}
		}
		v.resize(0);
	}
}
