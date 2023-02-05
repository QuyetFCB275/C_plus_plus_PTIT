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
        long long a[n];
        int cnt=0;
        for (int i=0; i<n; i++)
        {
            cin >> a[i];
            if (a[i] == 0) cnt++;
        }
        for (int i=0; i<n; i++)
        {
            if (a[i]!=0) cout << a[i] << " ";
        }
        for (int i=0; i<cnt; i++) cout << 0 << " ";
        cout << endl;
    }
    
}