#include <bits/stdc++.h>

using namespace std;

#define FOR(i, a, b) for(int i=a; i<=b; i++)
#define For(i, a, b) for(int i=a; i<b; i++)

int main ()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        long a[n+5], cnt=0;
        For(i, 0, n) cin >> a[i];
        sort(a, a+n);
        For(i, 0, n)
        {
            int upper1 = upper_bound(a, a+n, a[i] + k - 1) - a;
            cnt+=(upper1-i-1);
        }
        cout << cnt << endl;
    }
}