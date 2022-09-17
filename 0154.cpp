#include <bits/stdc++.h>

using namespace std;

int main ()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, k;
        cin >> n >> k;
        // int a=n/k, b=n%k;
        // int sum1=0, sum2=0;
        // for (int i=1; i<k; i++)
        // {
        //     sum1+=i;
        // }
        // long long cnt = a*sum1;
        // for (int i=1; i<=b; i++)
        // {
        //     sum2+=i;
        // }
        // long long cnt = a*sum1 + sum2;
        int cnt=0;
        for (int i=1; i<=n; i++)
        {
            cnt+=i%k;
        }
        // cout << cnt << endl;
        if (cnt == k) cout << 1 << endl;
        else cout << 0 << endl;
    }
}