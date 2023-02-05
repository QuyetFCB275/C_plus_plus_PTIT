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
        int n;
        cin >> n;
        int a[n+5];
        for (int i=0; i<n; i++) cin >> a[i];
        sort(a, a+n);
        For(i, 0, n) cout << a[i] << " ";
        cout << endl;
    }
    
}