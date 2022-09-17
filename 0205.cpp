#include <iostream>
#include <vector>

using namespace std;

int main ()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		long k, max=0;
		for (long i=0; i<n; i++)
		{
			cin >> k;
			if (k > max) max=k;
//			else break;
		}
		cout << max << endl;
	}
}
