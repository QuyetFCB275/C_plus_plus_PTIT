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
        int a[n+2];
        for (int i=0; i<n; i++) cin >> a[i];
        sort(a, a+n);
        int l=0, r=n-1;
        while (l<=r)
        {
            if (l==r) cout << a[l];
            else
                cout << a[r] << " " << a[l] << " ";
            l++;
            r--;
        }
        cout << endl;
    }
    
}