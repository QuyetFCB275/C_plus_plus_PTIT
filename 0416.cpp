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
        int a[n+5];
        for (int i=0; i<n; i++) cin >> a[i];
        int cnt=0;
        for (int i=0; i<n; i++)
        {
            for (int j=i+1; j<n; j++)
            {
                if (a[i] + a[j] == k) cnt++;
            }
        }
        cout << cnt << endl;
    }
    
}