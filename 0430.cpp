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
        int a[n], b[100006] = {0};
        For(i, 0, n)
        {
            cin >> a[i];
            b[a[i]] = 1;
        }
        sort(a, a+n);
        int cnt=0;
        for (int i=a[0]; i<a[n-1]; i++)
        {
            if(b[i] == 0) cnt++;
        }
        cout << cnt << endl;
    }
}