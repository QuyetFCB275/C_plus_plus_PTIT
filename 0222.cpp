#include <bits/stdc++.h>

using namespace std;

int main ()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[100][100], c[100000] = {0};
        int cnt=0;
        for (int i=0; i<n; i++)
        {
            int b[100000] = {0};
            for (int j=0; j<n; j++)
            {
                cin >> a[i][j];
                b[a[i][j]]=1;
            }
            for (int j=0; j<n; j++)
            {
                if(b[a[i][j]])
                {
                    c[a[i][j]]++;
                    b[a[i][j]] = 0;
                }
            }
        }
        for (int j=0; j<n; j++)
        {
            if (c[a[0][j]] == n)
            {
                cnt++;
                c[a[0][j]] = 0;
            }
        }
        cout << cnt << endl;
    }
}