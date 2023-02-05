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
        int n, m, index=0, a[1000];
        cin >> n >> m;
        for(int i=1; i<=n; i++)
        {
            cin >> a[i];
        }
        for(int i=1; i<=n; i++)
        {
            if(a[i] == m) 
            {
                index = i;
                break;
            }
        }
        if (index) cout << index << endl;
        else cout << -1 << endl;
    }
}