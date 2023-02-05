#include <bits/stdc++.h>

using namespace std;

bool dk(string a)
{
    int k = a.size();
    if (a[k-1] == '.' || a[k-1] == '?' || a[k-1] == '!') return 1;
    return 0;
}

int main()
{
    string s, tmp = "";
    vector<string> vt;
    while (cin >> s)
    {
        if (tmp == "") 
            tmp += s;
        else 
            tmp = tmp + " " + s;
        if (dk(tmp))
        {
            tmp.pop_back();
            tmp[0] = toupper(tmp[0]);
            for (int i=1; i<tmp.size(); i++) tmp[i] = tolower(tmp[i]);
            vt.push_back(tmp);
            tmp = "";
        }   
    }
    
    for (string x : vt)
    {
        cout << x << endl;
    }
    
}