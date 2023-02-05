#include <bits/stdc++.h>

using namespace std;

#define FOR(i, a, b) for(int i=a; i<=b; i++)
#define For(i, a, b) for(int i=a; i<b; i++)

int main ()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, m, a[1000];
        cin >> n >> m;
        for(int i=0; i<n; i++)
        {
            cin >> a[i];
        }
        sort(a, a+n);
        for(int i=n-1; i>=n-m; i--)
        {
           cout << a[i] << " ";
        }
        cout << endl;
    }
}