#include <bits/stdc++.h>

using namespace std;

int ngto(long long n)
{
    if (n==0 || n==1) return 0;
    for (long i=2; i<=sqrt(n); i++)
    {
        if (n%i==0) return 0;
    }
    return 1;
}

int main ()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long l, r;
        cin >> l >> r;
        int cnt=0;
        for (long long i=l; i<=r; i++)
        {
            if (ngto(i)) cnt++;
        }
        cout << cnt << endl;
    }
}