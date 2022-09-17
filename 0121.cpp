#include <bits/stdc++.h>

using namespace std;

int GCD(long a, long b)
{
    while(a!=b)
    {
        if (a>b) a-=b;
        else b-=a;
    }
    return a;
}

int main() {
    int t;
    cin >> t;
    while (t--)
    {
        long a, b;
        cin >> a >> b;
        cout << (long long) a*b/__gcd(a, b) << " " << __gcd(a, b);
        cout << endl;
    }
    
}