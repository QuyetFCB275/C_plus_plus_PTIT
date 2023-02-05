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
        int k, n;
        cin >> k >> n;
        int b = k*n;
        int a[k*n+5];
        for (int i=0; i<b; i++) cin >> a[i];
        sort(a, a+b);
        for (int i=0; i<b; i++) cout << a[i] << " ";
        cout << endl;
    }
    
}