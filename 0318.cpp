#include <bits/stdc++.h>

using namespace std;

#define FOR(i, a, b) for(int i=a; i<=b; i++)
#define For(i, a, b) for(int i=a; i<b; i++)

int dk1(string s)
{
    for (int i=0; i<4; i++)
    {
        if (s[i] >= s[i+1]) return 0;
    }
    return 1;
}

int dk2(string s)
{
    for (int i=0; i<4; i++)
    {
        if (s[i] != s[i+1]) return 0;
    }
    return 1;
}

int dk3(string s)
{
    if (s[0] != s[1] && s[1] != s[2]) return 0;
    if (s[3] != s[4]) return 0;
    return 1;
}

int dk4(string s)
{
    for (int i=0; i<=4; i++)
    {
        if (s[i] != '6' && s[i] != '8') return 0;
    }
    return 1;
}

int main ()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        string s;
        getline(cin, s);
        int k = s.find('-');
        string tmp = s.substr(k+1, s.size()); 
        tmp.erase(tmp.begin() + 3);
        if (dk1(tmp)==1 || dk2(tmp)==1 || dk3(tmp)==1 || dk4(tmp)==1) cout << "YES\n";
        else cout << "NO\n";
    }
}