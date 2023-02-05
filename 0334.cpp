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
        long long n=0, tmp=0;
        for (int i=0; i<=s.size(); i++)
        {
            if (isdigit(s[i])) tmp = tmp*10 + s[i] - '0';
            else 
            {
                n += tmp;
                tmp=0;
            }
        }
        cout << n << endl;
    }
}