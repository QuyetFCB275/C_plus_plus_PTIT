#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long x, y, z, n;
        cin >> x >> y >> z >> n;
        long long m = pow(10, n-1), p = pow(10, n) - 1, k1 = x*y/__gcd(x, y);
        long long k2 = k1*z/__gcd(k1, z);
        // if (x==1 && y==1 && z==1) cout << pow(10, n-1) << endl;
        if (m/k2 == p/k2) cout << -1 << endl;
        else if (m%k2 == 0) cout << m << endl;
        else 
        {
            long long a = m / k2;
            cout << k2*(a+1) << endl;
        }
    }
}