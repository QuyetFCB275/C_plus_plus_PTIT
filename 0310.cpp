#include <bits/stdc++.h>

using namespace std;

#define FOR(i, a, b) for(int i=a; i<=b; i++)
#define For(i, a, b) for(int i=a; i<b; i++)

long long summin(string s)
{
    int len = s.size();
    long long res=0;
    For(i, 0, len) 
    {
        if (s[i] == '6') s[i] = '5';
        res = res * 10 + s[i] - '0';
    }
    return res;
}

long long summax(string s)
{
    int len = s.size();
    long long res=0;
    For(i, 0, len) 
    {
        if (s[i] == '5') s[i] = '6';
        res = res * 10 + s[i] - '0';
    }
    return res;
}

int main ()
{
    int t;
    cin >> t;
    while (t--)
    {
        string a, b;
        cin >> a >> b;
        cout << summin(a) + summin(b) << " " << summax(a) + summax(b) << endl;
    }
    
}