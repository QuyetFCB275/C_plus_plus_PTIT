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
        int n, k;
        cin >> n >> k;
        int a[n+5];
        For(i, 0, n) cin >> a[i];
        set<int> st;
        For(i, 0, n) st.insert(a[i]);
        int cnt=1;
        for(auto &x : st)
        {
            auto f = st.find(x + k);
            if (f!=st.end())
            {
                cnt=0;
                break;
            }
        }
        if(cnt) cout << -1 << endl;
        else cout << 1 << endl;
    }
}