#include <bits/stdc++.h>

using namespace std;

int main ()
{
    int n, m, p;
    cin >> n >> m >> p;
    int a[n][m], b[m][p], c[n][p]={0};
    int i, j;
    for (i=0; i<n; i++)
        for (j=0; j<m; j++) 
            cin >> a[i][j];
    for (i=0; i<m; i++)
        for (j=0; j<p; j++) 
            cin >> b[i][j];
    for (i=0; i<n; i++)
        for (j=0; j<p; j++)
        {
            c[i][j]=0;
            for (int k=0; k<m; k++)
                c[i][j] += a[i][k] * b[k][j];
        }
    for (i=0; i<n; i++)
    {
        for (j=0; j<p; j++) 
            cout << c[i][j] << " ";
        cout << endl;
    }
}