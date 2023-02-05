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
        int k=0;
        for (int i=0; i<s.size(); i++) k += s[i] - '0';
        if (k % 9 == 0 && k!= 0) cout << 1;
        else cout << 0;
        cout << endl;
    }
}