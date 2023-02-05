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
        int n, m;
        cin >> n >> m;
        int a[1000], cnt=0;
        for (int i=0; i<n; i++) 
        {
            cin >> a[i];
            if(a[i] == m) cnt++;
        }
        if (cnt) cout << cnt << endl;
        else cout << -1 << endl;
    }
}