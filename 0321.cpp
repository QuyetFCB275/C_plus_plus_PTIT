#include <bits/stdc++.h>

using namespace std;

#define FOR(i, a, b) for(int i=a; i<=b; i++)
#define For(i, a, b) for(int i=a; i<b; i++)

int dk(string a, string b)
{
    if (a.size() < b.size()) return 1;
    if (a.size() == b.size() && a[0] < b[0]) return 1;
    return 0;
}

string hieu(string a, string b)
{
    string c = "";
    if (dk(a, b)) swap(a, b);
    // cout << a << endl << b << endl;
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());
    int tmp=0, tmp1=0;
    for (int i=0; i<b.size(); i++)
    {
        if ((a[i] - '0') < (b[i] - '0' + tmp1)) tmp = 10;
        else tmp=0;
        int k = (a[i] - '0') - (b[i] - '0' + tmp1) + tmp;
        if (tmp) tmp1 = 1;
        else tmp1 = 0;
        // k %= 10;
        c.push_back(k + '0');
    }
    for (int i=b.size(); i<a.size(); i++)
    {
        if ((a[i] - '0') < (tmp1)) tmp = 10;
        else tmp=0;
        int k = (a[i] - '0') - (tmp1) + tmp;
        if (tmp) tmp1 = 1;
        else tmp1 = 0;
        c.push_back(k + '0');
    }
    // if (tmp) c.push_back(tmp + '0');
    reverse(c.begin(), c. end());
    return c;
}

int main ()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        string a, b;
        cin >> a >> b;
        cout << hieu(a, b) << endl;
    }
}