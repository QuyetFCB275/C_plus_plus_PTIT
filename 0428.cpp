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
        int *a = new int[10000000];
        for (int i=0; i<n+m; i++) cin >> a[i];
        sort(a, a+n+m);
        for (int i=0; i<n+m; i++) cout << a[i] << " ";
        delete[] a;
        cout << endl;
    }
}