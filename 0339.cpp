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
        int cnt=0;
        For(i, 0, s.size()) 
            For(j, i+1, s.size()) 
                if (s[i] == s[j]) cnt++;
        cout << (cnt + s.size()) << endl;
    }
}