#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n ,p;
        cin >> n >> p;
        int cnt=0;
        for (int i=1; i<=n; i++)
        {
            int m=i;
            while (m%p==0)
            {
                cnt++;
                m/=p;
            }
        }
        cout << cnt << endl;
    }
}