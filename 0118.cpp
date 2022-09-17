#include <bits/stdc++.h>

using namespace std;

int sphenic(int n)
{
    int res=0;
    for (int i=2; i<=sqrt(n); i++)
    {
        // int cnt;
        if (n%i==0)
        {
            // cnt++;
            n/=i;
            if (n%i==0) return 0;
            res++;
        }
    }
    if (n>1) res++;
    return res==3;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        cout << sphenic(n) << endl;
    }
}