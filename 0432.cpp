#include <bits/stdc++.h>

using namespace std;

#define FOR(i, a, b) for(int i=a; i<=b; i++)
#define For(i, a, b) for(int i=a; i<b; i++)

bool cmp(int a, int b)
{
    return to_string(a) + to_string(b) > to_string(b) + to_string(a);
}

int main ()
{
    int t;
    cin >> t;
    while(t--)
    {

        int n;
        cin >> n;
        int a[n+5];
        For(i, 0, n) cin >> a[i];
        sort(a, a+n, cmp);
        For(i, 0, n) cout << a[i];
        cout << endl;
    }
}