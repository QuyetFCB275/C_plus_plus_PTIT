#include <bits/stdc++.h>

using namespace std;

int dk(int n)
{
    if (n == 0 || n == 1)
        return 0;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, check=0;
        cin >> n;
        for (int i=2; i<=n; i++)
        {
            if (dk(i) && dk(n-i)) 
            {
                cout << i << " " << n-i << endl;
                check=1;
                break;
            }
        }
        if (!check) cout << -1 << endl;
    }
}