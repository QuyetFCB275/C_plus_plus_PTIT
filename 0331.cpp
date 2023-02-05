// 123 456 579 1035 1614
// 123 456 579 1203
// 123 15 138 153 

#include <bits/stdc++.h>

using namespace std;

string cong(string a, string b)
{
    if (a.size() < b.size()) swap(a, b);
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());
    b += string((a.size() - b.size()), '0');
    int nho=0;
    string c = "";
    for (int i=0; i<a.size(); i++)
    {
        int tmp = a[i] - '0' + b[i] - '0' + nho;
        c += (char)(tmp % 10 + '0');
        nho = tmp / 10;
    }
    if (nho) c += (char) (nho + '0');
    reverse(c.begin(), c.end());
    return c;
}

bool kt(string s, int left, int len1, int len2)
{
    string a = s.substr(left, len1);
    string b = s.substr(left+len1, len2);
    string c = cong(a, b);
    if (c.size() > (s.size() - len1 - len2 - left)) return false;
    if (c == s.substr(left + len1 + len2, c.size()))
    {
        if (c.size() + len1 + len2 + left == s.size()) 
            return true;
        return kt(s, left + len1, len2, c.size());
    }
    return false;
}

void solve()
{
    string s;
    cin >> s;
    for (int i=1; i<s.size(); i++)
    {
        for (int j=1; j<s.size()-i; j++)
        {
            if (kt(s, 0, i, j)) 
            {
                cout << "Yes\n";
                return;
            }
        }
    }
    cout << "No\n";
}

int main ()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    // string a, b;
    // cin >> a >> b;
    // cout << cong(a, b);
    
}