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
        int n1, n2, n3;
        cin >> n1 >> n2 >> n3;
        long long a[n1+5], b[n2+5], c[n3+5];
        For(i, 0, n1) cin >> a[i];
        For(i, 0, n2) cin >> b[i];
        For(i, 0, n3) cin >> c[i];
        vector<long long> ans;
        int k1=0, k2=0, k3=0;
        while (k1 < n1 && k2 < n2 && k3 < n3)
        {
            if(a[k1] == b[k2] && b[k2] == c[k3]) 
            {
                ans.push_back(a[k1]);
                k1++;
                k2++;
                k3++;
            }
            else if (a[k1] < b[k2]) k1++;
            else if (b[k2] < c[k3]) k2++;
            else k3++;
        }
        if(ans.empty()) cout << -1;
        else 
            for(auto &x : ans)
                cout << x << " ";
        cout << endl;
    }
}