#include <bits/stdc++.h>

using namespace std;

int main ()
{
    int t;
    cin >> t;
    while (t--)
    {
        int m, n;
        cin >> m >> n;
        int a[105][105], k=0;
        vector<int> vt(10000);
        for (int i=0; i<m; i++)
        {
            for (int j=0; j<n; j++) 
                cin >> a[i][j];
        }
        int h1=0, h2=m-1, c1=0, c2=n-1;
        while (h1 <= h2 && c1 <=c2)
        {
            if (h1 <= h2 && c1 <=c2)
            {
                for (int i=c1; i<=c2; i++) vt[k++]=a[h1][i];
                h1++;
            }
            if (h1 <= h2 && c1 <=c2)
            {
                for (int i=h1; i<=h2; i++) vt[k++]=a[i][c2];
                c2--;
            }
            if (h1 <= h2 && c1 <=c2)
            {
                for (int i=c2; i>=c1; i--) vt[k++]=a[h2][i];
                h2--;
            }
            if (h1 <= h2 && c1 <=c2)
            {
                for (int i=h2; i>=h1; i--) vt[k++]=a[i][c1];
            c1++;
            }
        }
        vt.resize(k);
        reverse(vt.begin(), vt.end());
        for (int i=0; i<k; i++) cout << vt[i] << " ";
        cout << endl;
    }
}