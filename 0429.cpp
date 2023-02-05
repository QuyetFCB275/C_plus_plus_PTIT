#include <bits/stdc++.h>

using namespace std;

#define FOR(i, a, b) for(int i=a; i<=b; i++)
#define For(i, a, b) for(int i=a; i<b; i++)

int main ()
{
    int n, k, b;
    cin >> n >> k >> b;
    int res=0, bad=0, a[n+5] = {0};
    for (int i=1; i<=b; i++)
    {
        int x;
        cin >> x;
        a[x] = 1;
    }
    for (int i=1; i<=k; i++)
    {
        if (a[i]==1) bad++;
    }
    res=bad;
    for (int i=k+1; i<=n; i++)
    {
        if(a[i-k] == 1) bad--;
        if(a[i] == 1) bad++;
        if (bad < res) res = bad;
    }
    cout << res;
}