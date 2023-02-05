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
        int sum = abs(a[0] + a[1]);
        for (int i=0; i<n-1; i++)
        {
            for (int j=i+1; j<n; j++)
            {
                if (abs(a[i] + a[j]) < abs(sum)) sum = a[i] + a[j];
            }
        }
        cout << sum << endl;
    }
}