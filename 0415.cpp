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
        int n, m;
        cin >> n >> m;
        int a[n], b[m];
        long long min = 999999999, max = -999999999;
        for (int i=0; i<n; i++)
        {
            cin >> a[i];
            if (a[i] > max) max = a[i];
        }
        for (int i=0; i<m; i++)
        {
            cin >> b[i];
            if (b[i] < min) min = b[i];
        }
        cout << min*max << endl;
    }
    
}