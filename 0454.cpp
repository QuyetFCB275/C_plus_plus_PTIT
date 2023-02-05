#include <bits/stdc++.h>

using namespace std;

#define FOR(i, a, b) for(int i=a; i<=b; i++)
#define For(i, a, b) for(int i=a; i<b; i++)

bool check(long long a[], int n)
{
    for (int i=n-1; i>0; i--)
    {
        int l=0, r=i-1;
        while(l<r)
        {
            if(a[i] == a[l] + a[r]) return true;
            else if(a[i] > a[l] + a[r]) l++;
            else r--;
        }
    }
    return false;
}

int main ()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        long long a[n];
        for (int i=0; i<n; i++) 
        {
            long long x;
            cin >> x;
            a[i] = x*x;
        }
        sort(a, a+n);
        if (check(a, n)) cout << "YES\n";
        else cout << "NO\n";
    }
}