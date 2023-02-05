#include <bits/stdc++.h>

using namespace std;

#define FOR(i, a, b) for(int i=a; i<=b; i++)
#define For(i, a, b) for(int i=a; i<b; i++)

int dk1(int k, int n, int a[])
{
    int min = a[k];
    for (int i=k; i<=n; i++)
    {
        if (a[i] < min) return 1;
    }
    return 0;
}

int dk2(int k, int n, int a[])
{
    int max = a[k];
    for (int i=k; i>=1; i--)
    {
        if (a[i] > max) return 1;
    }
    return 0;
}

int main ()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n+5];
        int l, r;
        for (int i=1; i<=n; i++) cin >> a[i];
        for (int i=n; i>=1; i--)
        {
            if (dk1(i, n, a))
            {
                l = i;
            }
        }

        for (int i=1; i<=n; i++)
        {
            if (dk2(i, n, a))
            {
                r = i;
            }
        }
        cout << l << " " << r << endl;
    }
    

}