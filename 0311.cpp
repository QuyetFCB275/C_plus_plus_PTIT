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
        int len=s.size();
        int a[200] = {0};
        for (int i=0; i<len; i++) a[s[i]]++;
        int max=0;
        for (int i=97; i<=122; i++)
        {
            if (a[i] > max) max = a[i];
        }
        if (max <= (len - max + 1)) cout << 1 << endl;
        else cout << 0 << endl;
    }
    
}