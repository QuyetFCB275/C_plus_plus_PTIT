#include <bits/stdc++.h>

using namespace std;

#define FOR(i, a, b) for(int i=a; i<=b; i++)
#define For(i, a, b) for(int i=a; i<b; i++)

int dk(string &s)
{
    int a[20] = {0};
    if (s[0] == '0') return -1;
    for (int i=0; i<s.size(); i++)
    {
        if (s[i] < 48 || s[i] > 57) return -1;
        a[s[i] - '0'] ++;
    }
    for (int i=0; i<=9; i++)
        if (a[i] == 0) return 0;
    return 1;
}

int main ()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        if (dk(s)==1) cout << "YES\n";
        else if (dk(s)==0) cout << "NO\n";
        else cout << "INVALID\n";
    }
}