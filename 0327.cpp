#include <bits/stdc++.h>

using namespace std;

#define FOR(i, a, b) for (int i = a; i <= b; i++)
#define For(i, a, b) for (int i = a; i < b; i++)

int main()
{
    int t;
    cin >> t;
    cin.ignore(1);
    while (t--)
    {
        string s;
        cin >> s;
        int l = 0, r = s.size() - 1;
        while (l <= r)
        {
            char tmp = s[l];
            s[l] = s[r];
            s[r] = tmp;
            l++;
            r--;
        }
        int tmp, sum = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '1')
            {
                int j = i;
                tmp = 1;
                while (j)
                {
                    tmp = tmp * 2;
                    tmp %= 5;
                    j--;
                }
                sum += tmp;
            }
        }
        if (sum % 5 == 0)
            cout << "Yes\n";
        else
            cout << "No\n";
    }
}