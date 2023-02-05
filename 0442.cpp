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
        int n, x;
        cin >> n >> x;
        int a[n];
        For(i, 0, n) cin >> a[i];
        sort(a, a+n);
        if(binary_search(a, a+n, x)) cout << "1\n";
        else cout << "-1\n";
    }
}