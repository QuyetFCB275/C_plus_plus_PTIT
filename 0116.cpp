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
        int n;
        cin >> n;
        cout << 1 << " ";
        for (int i = 2; i <= n; i++)
        {
            if (dk(i))
            {
                cout << i << " ";
            }
            else if (i % 2 == 0)
            {
                cout << 2 << " ";
            }
            else
            {
                for (int j = 2; j <= sqrt(i); j++)
                {
                    if (i % j == 0 && dk(j) == 1)
                    {
                        cout << j << " ";
                        break;
                    }
                }
            }
        }
        cout << endl;
    }
}