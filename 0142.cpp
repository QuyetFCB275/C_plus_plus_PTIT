#include <bits/stdc++.h>

using namespace std;

int ucln(int n, int i)
{
    while (n!=i)
    {
        if (n>i) n-=i;
        else i-=n;
    }
    return n==1;
}

int dk(int n)
{
    if (n==0 || n==1) return 0;
    for (int i=2; i<=sqrt(n); i++)
    {
        if (n%i==0) return 0;
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
        int cnt=0;
        if (n%2==0)
        {
            for (int i=1; i<=n; i+=2)
            {
                if (ucln(n, i)) cnt++;
            }
        }
        else 
        {
            for (int i=1; i<=n; i++)
            {
                if (ucln(n, i)) cnt++;
            }
        }
        cout << dk(cnt) << endl;
    }
}