#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        long long k=1, kq;
        for (long long i=2; i<=n; i++) 
        {
            k = i*k/__gcd(i, k);
        }
        cout << (long long )k << endl;
    }
    
}