#include <bits/stdc++.h>

using namespace std;

#define FOR(i, a, b) for (int i=a; i<=b; i++)

int main ()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int x1=n-3+1, x2=m-3+1;
        long long cnt=0;
        int a[305][305], b[5][5], c[x1+5][x2+5];
        FOR(i, 1, n)    FOR(j, 1, m) cin >> a[i][j];
        FOR(i, 1, 3)    FOR(j, 1, 3) cin >> b[i][j];
        FOR(i, 1, x1)
        {
            FOR(j, 1, x2)
            {
                int d=i, e=j;
                for (int o=1; o<=3; o++)
                {
                    for (int p=1; p<=3; p++)
                        cnt += a[d][e++] * b[o][p];
                    d++;
                    e=j;
                }
            }
        }
        cout << cnt << endl;
    }
}