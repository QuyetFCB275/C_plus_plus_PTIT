#include <bits/stdc++.h>

using namespace std;

int fibo(long long n)
{
    long long a[100] = {0, 1};
    for (int i=2; i<20; i++) a[i] = a[i-1] + a[i-2];
    for (int i=0; i<20; i++)
    {
        if (n==a[i]) return 1;
    }
    return 0;
}

int main ()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[105];
        for (int i=0; i<n; i++)
            cin >> a[i];
        for (int i=0; i<n; i++) 
            if (fibo(a[i])) cout << a[i] << " ";
        cout << endl;
    }
}