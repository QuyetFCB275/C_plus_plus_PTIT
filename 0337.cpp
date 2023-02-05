#include <bits/stdc++.h>

using namespace std;

#define FOR(i, a, b) for (int i = a; i <= b; i++)
#define For(i, a, b) for (int i = a; i < b; i++)

void solve()
{
    string s1;
    cin >> s1;
    set<char> st;
    for (auto x : s1)
    {
        st.insert(x);
    }
    string s2;
    for (auto x : st)
    {
        s2.push_back(x);
    }

    int dem1[300] = {0}, dem2[300] = {0}, left = 0, cnt = 0, index = -1, res = INT_MAX;
    for (char x : s2)
    {
        dem2[x]++;
    }
    for (int i = 0; i < s1.size(); i++)
    {
        dem1[s1[i]]++;
        if (dem1[s1[i]] <= dem2[s1[i]])
            cnt++;
        if (cnt == s2.size())
        {
            while (dem1[s1[left]] > dem2[s1[left]] || dem2[s1[left]] == 0)
            {
                if (dem1[s1[left]] > dem2[s1[left]])
                    dem1[s1[left]]--;
                left++;
            }
            if (res > i - left + 1)
            {
                res = i - left + 1;
                index = left;
            }
        }
    }
        cout << res << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}