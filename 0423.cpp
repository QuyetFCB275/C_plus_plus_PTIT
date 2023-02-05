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
        int cnt=0, a[n+5];
        For(i, 0, n)
        {
            cin >> a[i];
            if (a[i] <= k) cnt++;
        }
        int res=0, bad=0;
        for (int i=0; i<cnt; i++)
        {
            if (a[i] > k) bad++;
        }
        res = bad;
        // cout << cnt << res << endl;
        for (int i=cnt; i<n; i++)
        {
            if (a[i-cnt] > k) bad--;
            if (a[i] > k) bad++;
            if (bad < res) res = bad;
        }
        cout << res << endl;
    }
}