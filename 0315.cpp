#include <bits/stdc++.h>

using namespace std;

#define FOR(i, a, b) for(int i=a; i<=b; i++)
#define For(i, a, b) for(int i=a; i<b; i++)

void solve()
{
    string s;
    cin >> s;
    int i = s.size() - 2;
    while(i >= 0 && s[i] <= s[i+1]) i--;
    if (i==-1) 
    {
        cout << -1;
        return;
    }
    int j = s.size() - 1;
    while (s[i] <= s[j] || (s[i] > s[j] && s[j] == s[j-1]) )
    {
        j--;
    }
    swap(s[i], s[j]);
    if (s[0] == '0')
    {
        cout << -1;
    }
    else cout << s;
}

int main ()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
        cout << endl;
    }
}