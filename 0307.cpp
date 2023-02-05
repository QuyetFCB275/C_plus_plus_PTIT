#include <bits/stdc++.h>

using namespace std;

set<string> convert(string s)
{
    set<string> st;
    stringstream ss(s);
    string tmp;
    while (ss >> tmp)
    {
        st.insert(tmp);
    }
    return st;
}

int main ()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        string s1, s2;
        getline(cin, s1);
        getline(cin, s2);
        set<string> vt1 = convert(s1);
        set<string> vt2 = convert(s2);
        for (auto x : vt1)
        {
            if (vt2.find(x) == vt2.end())
                cout << x << " ";
        }
        cout << endl;
    }
}