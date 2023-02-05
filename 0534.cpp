#include <bits/stdc++.h>

using namespace std;

bool dk(string s)
{
    if (s.size() == 1) return 0;

    int l=0, r=s.size()-1;
    while(l<r)
    {
        if (s[l] != s[r]) return 0;
        l++;
        r--;
    }
    return 1;
}

bool  cmp(pair<string, int> a, pair<string, int> b)
{
    if (a.first.size() == b.first.size())
    {
        return a.first > b.first;
    }
    return a.first.size() > b.first.size();
}

int main ()
{
    map<string, int> mp;
    string s;
    while (cin >> s)
        if (dk(s))
            mp[s]++;

    vector<pair<string, int>> vt;
    for (auto x : mp)
        vt.push_back(x);
    sort(vt.begin(), vt.end(), cmp);
    for (auto x : vt)
        cout << x.first << " " << x.second << endl;
}