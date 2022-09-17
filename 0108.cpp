#include <bits/stdc++.h>

using namespace std;

// Ham tang dan
int dk1(long n)
{
	int a=n%10;
	while(n>9)
	{
		n/=10;
		int b = n%10;
		if (b >= a) return 0;
		a = b;
	}
	return 1;
}

// Ham giam dan
int dk2(long n)
{
	int a=n%10;
	while(n>9)
	{
		n/=10;
		int b = n%10;
		if (b <= a) return 0;
		a = b;
	}
	return 1;
}

bool dk3(long n)
{
	for (int i=2; i<=sqrt(n); i++)
	{
		if (n%i==0) return false;
	}
	return true;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int sum=0;
        long a = pow(10, n - 1), b = pow(10, n) - 1;
        for (long i=a; i<=b; i++)
        {
        	if ((dk1(i)==1 || dk2(i)==1) && dk3(i)==1) 
        	{
        		sum++;
//        		cout << i << " ";
			}
		}
		cout << sum << endl;
    }
}
