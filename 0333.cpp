#include <bits/stdc++.h>

using namespace std;

#define FOR(i, a, b) for(int i=a; i<=b; i++)
#define For(i, a, b) for(int i=a; i<b; i++)

int main ()
{
    string s;
    getline(cin, s);
    stringstream ss(s);
    string tmp;
    vector<string> b;
    int k=0;
    while (ss >> tmp)
    {
        b.push_back(tmp);
    }
    int l=b.size();
    for (int i=0; i<l-1; i++) 
    {
        for (int j=0; j<b[i].size(); j++)
        {
            if (j==0) b[i][j] = toupper(b[i][j]);
            else b[i][j] = tolower(b[i][j]);
        }
        cout << " " << b[i];
    }
    for (int j=0; j<b[l-1].size(); j++) b[l-1][j] = toupper(b[l-1][j]);
    cout << ", " << b[l-1];
}