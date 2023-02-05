#include <bits/stdc++.h>

using namespace std;

#define FOR(i, a, b) for(int i=a; i<=b; i++)
#define For(i, a, b) for(int i=a; i<b; i++)

int main ()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n+5], a1[n], a2[n];
        For(i, 0, n) cin >> a[i];
        sort(a, a+n);
        // For(i, 0, n) cout << a[i] << " ";
        int l;
        if (n%2==0) l = n/2;
        else l = n/2+1;
        for (int i=0; i<l; i++) a1[i] = a[i];
        for (int i=l; i<n; i++) a2[i] = a[i];
        int left=0, right=l;
        while (left < l || right < n)
        {
            if(left<l) cout << a1[left] << " ";
            if(right<n) cout << a2[right] << " ";
            left++; right++;
        }
        cout << endl;
    }
    
}