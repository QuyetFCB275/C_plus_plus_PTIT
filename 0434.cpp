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
        For(i, 0, n) cin >> a[i];
        For(i, 0, n)
        {
            if (i==0) cout << a[i]*a[i+1] << " ";
            else if(i==n-1) cout << a[i]*a[i-1] << " ";
            else cout << a[i-1]*a[i+1] << " ";
        }
        cout << endl;
    }
    
}