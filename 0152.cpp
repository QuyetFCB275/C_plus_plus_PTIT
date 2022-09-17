#include <bits/stdc++.h>

using namespace std;

int main ()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, m;
        cin >> a >> m;
        int x=-1;
        for (int i=1; i<m; i++)
        {
            if (a*i%m==1) 
            {
                x=i;
                break;
            }
        }
        if (x) cout << x << endl;
        else cout << x << endl;
    }
}