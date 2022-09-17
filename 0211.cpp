#include <bits/stdc++.h>

using namespace std;

int main ()
{
    int t;
    cin >> t;
    while (t--)
    {
        long n;
        cin >> n;
        long a[n+5];
        for (long i=0; i<n; i++) cin >> a[i];
        int brand=0;
        for (int i=0; i<n; i++)
        {
            for (int j=n-1; j>=i+1; j--)
                if (a[j] > a[i])
                {
                    brand = max(brand, j-i);
                    break;
                }
        }
        cout << brand << endl;
    }
}