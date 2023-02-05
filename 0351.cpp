#include <bits/stdc++.h>

using namespace std;

#define FOR(i, a, b) for(int i=a; i<=b; i++)
#define For(i, a, b) for(int i=a; i<b; i++)

void th1(string s)
{
    vector<string> vt;
    stringstream ss(s);
    string tmp;
    while (ss >> tmp)
    {
        vt.push_back(tmp);
    }
    int size = vt.size();
    string s1 = vt[size-1];
    for (int i=0; i<s1.size(); i++)
    {
        if (i==0) s1[i] = toupper(s1[i]);
        else s1[i] = tolower(s1[i]);
        cout << s1[i];
    }
    cout << " ";
    vt.pop_back();
    for (auto x : vt)
    {
        for (int i=0; i<x.size(); i++)
        {
            if (i==0) x[i] = toupper(x[i]);
            else x[i] = tolower(x[i]);
            cout << x[i];
        }
        cout << " ";
    }
    cout << endl;
}

void th2(string s)
{
    vector<string> vt;
    stringstream ss(s);
    string tmp;
    while (ss >> tmp)
    {
        vt.push_back(tmp);
    }
    string s1 = vt[0];
    for (auto x : vt)
    {
        if (x == s1) continue;
        for (int i=0; i<x.size(); i++)
        {
            if (i==0) x[i] = toupper(x[i]);
            else x[i] = tolower(x[i]);
            cout << x[i];
        }
        cout << " ";
    }
    for (int i=0; i<s1.size(); i++)
    {
        if (i==0) s1[i] = toupper(s1[i]);
        else s1[i] = tolower(s1[i]);
        cout << s1[i];
    }
    cout << endl;
}

int main ()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        int t;
        cin >> t;
        cin.ignore();
        string s;
        getline(cin, s);
        if (t==1) th1(s);
        else th2(s);
    }
}