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
        int n;
        cin >> n;
        int a[10] = {0};
        while (n--)
        {
            string s;
            cin >> s;
            for (int i=0; i<s.size(); i++)
            {
                a[s[i] - '0'] = 1;
            }
        }
        for (int i=0; i<=9; i++)
        {
            if (a[i] == 1) cout << i << " ";
        }
        cout << endl;
    }
    
}