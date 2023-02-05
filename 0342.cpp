#include <bits/stdc++.h>

using namespace std;

#define FOR(i, a, b) for(int i=a; i<=b; i++)
#define For(i, a, b) for(int i=a; i<b; i++)

int main ()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        string s;
        cin >> s;
        long n=0, k=0;
        vector<char> vt;
        for (int i=0; i<s.size(); i++)
        {
            if (isdigit(s[i])) n += s[i] - '0';
            else vt.push_back(s[i]);
        }
        sort(vt.begin(), vt.end());
        for (auto x : vt)
        {
            cout << x;
        }
        cout << n << endl;
    }
    
}