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
        int n, m;
        cin >> n >> m;
        int a[n+5], b[m+5];
        set<int> s1, s2;
        for (int i=1; i<=n; i++)
        {
            cin >> a[i];
            s1.insert(a[i]);
        }

        int k=0;
        for (int i=1; i<=m; i++)
        {
            cin >> b[i];
            s1.insert(b[i]);
            // s1.size() + k : là kích thước ảo, kích thước thực là s1.size()
            if (n + i != s1.size() + k)
            {
                s2.insert(b[i]);
                k++;
            }
        }
        for(auto &x:s1) cout << x << " ";
        cout << endl;
        for (auto &x:s2) cout << x << " ";
        cout << endl;
    }
}