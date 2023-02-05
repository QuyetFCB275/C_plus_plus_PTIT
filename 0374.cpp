// AAA BBB A BBBBB AAA BBBB 1 + 2 + 2 = 5
// BBB AAA B AAAAA BBB AAAA 1 + (1 + 2) = 4
// AAA BBB AA BBB AAA BB 6 = 2 + 2 + 2
// BBB AAA BB AAA BBB AA 5 = 1 + 2 + 2
// AAA B A B A B A BBB A = 5
// B AAA B AAA BB AA = 4
// B AAA BB AAA BB AA B = 6
#include <bits/stdc++.h>

using namespace std;

int main ()
{
    string s;
    cin >> s;
    int cnt=0;
    for (int i=1; i<s.size()-1; i++)
    {
        if (s[i] != s[i-1] && s[i] != s[i+1]) 
        {
            s[i] = s[i-1];
            cnt++;
        }
    }
    if (s[0] == 'B') cnt++;
    if (s[s.size()-1] == 'B' && s[s.size()-2] == 'A') cnt++;
    for (int i=1; i<s.size()-1; i++)
    {
        if (s[i] == 'B' && s[i-1] != 'B') cnt+=2;
    }
    // cout << s << endl;
    cout << cnt;
}