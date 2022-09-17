#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long b, p;
        cin >> b >> p;
        int res=0;
        for (long long i=1; i<=p; i++)
        {
            if (i*i % p == 1)
            {
                long long last = i + p*(b/p);
                if (last > b) 
                    last -=p;
                res += (last - i)/p + 1;
            }
        }
        cout << res << endl;
    }
}
// x%p=x^2%p
// x%p=(x+i*p)%p
// 20 6
// 1-7-13-19, 5-11-17...