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
        long long n;
        cin >> n;
        int check = 0;
        for (int i = 2; i < 20; i++)
        {
            if (dk(i) && dk(pow(2, i)-1))
            {
                if (n == ((pow(2, i) - 1) * pow(2, i - 1)))
                {
                    check = 1;
                    cout << 1 << endl;
                    break;
                }
            }
        }
        if (!check)
            cout << 0 << endl;
    }
}