#include <bits/stdc++.h>

using namespace std;

string tong(string a, string b)
{
    string c = "";
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());
    if (a.size() > b.size()) swap(a, b);
    int tmp=0;
    for (int i=0; i<a.size(); i++)
    {
        int k = (a[i] - '0') + (b[i] - '0') + tmp;
        tmp = k / 10;
        k %= 10;
        c.push_back(k + '0');
    }
    for (int i=a.size(); i<b.size(); i++)
    {
        int k = b[i] - '0' + tmp;
        tmp = k / 10;
        k %= 10;
        c.push_back(k + '0');
    }
    if (tmp) c.push_back(tmp + '0');
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
        cout << tong(a, b) << endl;
    }
}