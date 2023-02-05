#include <bits/stdc++.h>

using namespace std;

#define FOR(i, a, b) for(int i=a; i<=b; i++)
#define For(i, a, b) for(int i=a; i<b; i++)

int dk(string s)
{
    int k, tmp=0;
    for (int i=0; i<s.size(); i++)
    {
        k = tmp*10 + s[i] - '0';
        tmp = k % 11;
    }
    if (tmp==0) return 1;
    return 0;
}

int main ()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        string s;
        cin >> s;
        if (dk(s)) cout << 1;
        else cout << 0;
        cout << endl;
    }
}