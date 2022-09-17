#include <bits/stdc++.h>

using namespace std;

int dk(string s)
{
    int len = s.size();
    for (int i = 1; i < len; i++)
    {
        if (s[i] != s[i-1] +1 && s[i] != s[i - 1] - 1)
            return 0;
    }
    return 1;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        if (dk(s))
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}