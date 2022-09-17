#include <bits/stdc++.h>

using namespace std;

const long long P = 1e9 + 7;
int a[2000];

int main ()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long k=0;
        int n, x;
        cin >> n >> x;
        for (int i=n-1; i>=0; i--) cin >> a[i];
        long long res=1;
        for (int i=0; i<n; i++)
        {
            k+=res*a[i];
            k%=P;
            res*=x;
            res%=P;
        }
        cout << k << endl;
    }
    
}