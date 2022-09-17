#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long n;
        cin >> n;
        int cnt=0;
        for (int i=1; i<=sqrt(n); i++)
        {
            if (n%i==0)
            {
                if (i%2==0) cnt++;
                int k = n/i;
                if (k%2==0 && n!=i*i) cnt++;
            }

        }
        cout << cnt << endl;
    }
}