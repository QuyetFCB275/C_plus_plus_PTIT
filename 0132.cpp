#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, i;
        cin >> n;
        for (i = 2; i <= sqrt(n); i++)
        {
            if (n % i == 0)
            {
                while (n % i == 0)
                {
                    n /= i;
                }
                if (n==1) break;
            }
        }
        if (n==1) cout << i << endl;
        else cout << n << endl;
//        cout << endl;
    }
}
