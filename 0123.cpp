#include <bits/stdc++.h>

using namespace std;

int kt(long n)
{
    if (n==1 || n==0) return 0;
    for (int i=2; i<=sqrt(n); i++)
    {
        if (n%i==0) return 0;
    }
    return 1;
}

int main()
{
    long n;
    cin >> n;
    if (kt(n)) cout << "YES";
    else cout << "NO";
}