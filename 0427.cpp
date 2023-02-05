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
        For(i, 1, n)
        {
            if(a[i]!=0 && a[i] == a[i-1])
            {
                a[i-1] *= 2;
                a[i] = 0;
            }
        }
        For(i, 0, n)
            if(a[i]!=0) cout << a[i] << " ";
        For(i, 0, n) 
            if(a[i]==0) cout << a[i] << " ";
        cout << endl;
    }
}