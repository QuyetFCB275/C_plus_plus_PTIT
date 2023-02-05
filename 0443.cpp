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
        int dem=1;
        for(int i=1; i<n; i++)
        {
            int x;
            cin >> x;
            if (x==dem)
            {
                dem++;
            }
        }
        cout << dem << endl;
    }
}