#include <bits/stdc++.h>

using namespace std;

#define FOR(i, a, b) for(int i=a; i<=b; i++)
#define For(i, a, b) for(int i=a; i<b; i++)

int main ()
{
    string s, email;
    getline(cin, s);
    int i;
    for (i=0; i<s.size(); i++)
    {
        s[i] = tolower(s[i]);
    }
    for (i=s.size()-1; i>=0; i--)
    {
        if (s[i] == ' ') break;
    }
    email = s.substr(i+1, s.size()-i);
    s.erase(i);
    stringstream ss(s);
    string tmp;
    while (ss >> tmp)
    {
        email.push_back(tmp[0]);
    }
    cout << email << "@ptit.edu.vn";
}