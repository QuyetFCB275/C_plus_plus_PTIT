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
        string s;
        cin >> s;
        int a[200] = {0};
        for (int i=0; i<s.size(); i++)
        {
            a[s[i]]++;
        }
        for (int i=0; i<s.size(); i++)
        {
            if (a[s[i]] == 1) cout << s[i];
        }
        cout << endl;
    }
}