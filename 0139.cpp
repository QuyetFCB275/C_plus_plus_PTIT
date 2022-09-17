#include <bits/stdc++.h>

using namespace std;

int tong(long n)
{
    int k = 0;
    while (n > 0)
    {
        k += n % 10;
        n /= 10;
    }
    return k;
}

int kt(long n)
{
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
        long n;
        cin >> n;
        if (kt(n))
        {
            cout << "NO\n";
        }
        else
        {
            int sum = 0, cnt = 0;
            sum = tong(n);
            for (int i = 2; i <= n; i++)
            {
                while (n % i == 0)
                {
                    cnt += tong(i);
                    n /= i;
                }
            }
            if (sum == cnt)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
    }
}