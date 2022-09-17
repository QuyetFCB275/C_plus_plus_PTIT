#include <bits/stdc++.h>

using namespace std;

// int kt(unsigned long long n,unsigned long long a[])
// {
//     for (int i=1; i<100; i++)
//     {
//         if (n==a[i]) return 1;
//     }
//     return 0;
// }

// int main ()
// {
//     unsigned long long a[100];
//     a[1] = {1}, a[2] = {1};
//     for (int i=3; i<80; i++) a[i] = a[i-1] + a[i-2];
//     // cout << a[95];
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         unsigned long long n;
//         cin >> n;
//         if (kt(n, a)) cout << "YES\n";
//         else cout << "NO\n";
//     }
// }

int main ()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long f0 = 0, f1 = 1, fn = 0;
        long long n;
        cin >> n;
        while (fn < n)
        {
            fn = f0 + f1;
            f0 = f1;
            f1 = fn;
        }
        if (fn == n) cout << "YES" << endl;
        else cout << "NO" << endl;
    }   
}