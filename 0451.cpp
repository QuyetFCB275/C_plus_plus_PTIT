#include <bits/stdc++.h>

using namespace std;

#define FOR(i, a, b) for(int i=a; i<=b; i++)
#define For(i, a, b) for(int i=a; i<b; i++)

int main ()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, k, x;
        cin >> n;
        int a[n+5];
        For(i, 0, n) cin >> a[i];
        cin >> k >> x;
        int upper1 = upper_bound(a, a+n, x) - a;
        int left = upper1-1, right=upper1;
        if(a[left] == x) left--;
        k/=2;
        while (k--)
        {
            if(abs(a[right] - x) < abs(a[left]-x)) cout << a[right] << " " << a[left] << " ";
            else cout << a[left] << " " << a[right] << " ";
            left--;
            right++;
        }
        
        // cout << upper1;
    }
}