#include <bits/stdc++.h>

using namespace std;

int main()
{
	ifstream fp;
	fp.open("DATA.in");
	int x, a[1000] = {0};
	while(fp >> x)
	{
		a[x]++;
	}
	fp.close();
	for (int i=0; i<1000; i++)
	{
		if (a[i] != 0)
		{
			cout << i << " " << a[i] << endl;
		}
	}
}