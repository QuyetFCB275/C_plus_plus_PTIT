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
        long long m;
        cin >> m;
        long long k=0, tmp=0;
        for (int i=0; i<s.size(); i++)
        {
            k = tmp*10 + s[i] - '0';
            tmp = k % m;
        }
        cout << tmp << endl;
    }
}