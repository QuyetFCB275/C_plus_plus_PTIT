#include <bits/stdc++.h>

using namespace std;

#define FOR(i, a, b) for(int i=a; i<=b; i++)
#define For(i, a, b) for(int i=a; i<b; i++)

long long chiadu(string a, long long m)
{
    long long tmp=0;
    for (int i=0; i<a.size(); i++)
    {
        tmp = tmp * 10 + a[i] - '0';
        tmp %= m;
    }
    return tmp;
}

long long powmod(long long a, long long b, long long m)
{
    long long res = 1;
    while (b)
    {
        if (b%2==1)
        {
            res *= a;
            res %= m;
        }
        a *= a;
        a %= m;
        b /= 2;
    }
    return res;
}

int main ()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        string a;
        cin >> a;
        long b, m, kq;
        cin >> b >> m;
        long du = chiadu(a, m);
        cout << powmod(du, b, m) << endl;
    }
}