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
        int n;
        cin >> n;
        int a[n];
        For(i, 0, n) cin >> a[i];
        sort(a, a+n);
        if (a[0] == a[1]) cout << "-1\n";
        else cout << a[0] << " " << a[1] << endl;
    }
}