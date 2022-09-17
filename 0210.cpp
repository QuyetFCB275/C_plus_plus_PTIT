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
        int a[100000];
        for (int i=0; i<n; i++)
            cin >> a[i];
        int brand=0;
        for (int i=0; i<n; i++)
        {
            for (int j=i+1; j<n; j++)
                if (brand < (a[j]-a[i])) brand = a[j]-a[i];
        }
        if (brand) cout << brand << endl;
        else cout << -1 << endl;
    }
}