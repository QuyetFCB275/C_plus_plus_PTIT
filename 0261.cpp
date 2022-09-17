#include <bits/stdc++.h>

using namespace std;

#define FOR(i, a, b) for (int i=a; i<=b; i++)

int main ()
{
    int n;
    cin >> n;
    int a[100][100], c[100][100];
    FOR(i, 1, n)
    {
        FOR(j, 1, n) cin >> a[i][j];
    }
    int m;
    cin >> m;
    int b[100][100];
    FOR(i, 1, m)
    {
        FOR(j, 1, m) cin >> b[i][j];
    }
    int x=1, y=1;
    for (int i=1; i<=n; i++)
    {
        for (int j=1; j<=n; j++)
        {
            c[i][j] = a[i][j] * b[x][y++];
            if (j%m==0) y=1;
        }
        x++;
        if (i%m==0) x=1;
    }
    FOR(i, 1, n)
    {
        FOR(j, 1, n) cout << c[i][j] << " ";
        cout << endl;
    }
}