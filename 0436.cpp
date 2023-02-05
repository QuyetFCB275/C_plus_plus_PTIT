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
        int n;
        cin >> n;
        int a[n+5], b[n+5];
        For(i, 0, n)
        {
            cin >> a[i];
            b[i] = a[i];
        }
        sort(b, b+n);
        int max = b[n-1];
        for (int i=0; i<n; i++)
        {
            if (a[i] == max) cout << "_" << " ";
            else 
            {
                int k = (upper_bound(b, b+n, a[i]) - b);
                cout << b[k] << " ";
            }
        }
        cout << endl;
    }
}