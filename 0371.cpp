#include <bits/stdc++.h>

using namespace std;

#define FOR(i, a, b) for(int i=a; i<=b; i++)
#define For(i, a, b) for(int i=a; i<b; i++)

int main ()
{
    string s;
    cin >> s;
    for (int i=0; i<s.size(); i++) s[i] = tolower(s[i]);
    for (int i=0; i<s.size(); i++)
    {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'y') continue;;
        cout << "." << s[i];
    }
}