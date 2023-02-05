#include <bits/stdc++.h>

using namespace std;

#define FOR(i, a, b) for(int i=a; i<=b; i++)
#define For(i, a, b) for(int i=a; i<b; i++)

int ktra(string s, int a[])
{
    int l=0, r=s.size() -1;
    while (l < r)
    {
        if (a[s[l]] != a[s[r]]) return 0;
        l++;
        r--;
    }
    return 1;
}

int main ()
{
    int a[100];
    a[65] = a[66] = a[67] = 2;
    a[68] = a[69] = a[70] = 3;
    a[71] = a[72] = a[73] = 4;
    a[74] = a[75] = a[76] = 5;
    a[77] = a[78] = a[79] = 6;
    a[80] = a[81] = a[82] = a[83] = 7;
    a[84] = a[85] = a[86] = 8;
    a[87] = a[88] = a[89] = a[90] = 9;
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        string s;
        cin >> s;
        for (int i=0; i<s.size(); i++)
        {
            s[i] = toupper(s[i]);
        }
        if (ktra(s, a)) cout << "YES\n";
        else cout << "NO\n";
    }
}