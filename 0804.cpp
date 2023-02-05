#include <bits/stdc++.h>

using namespace std;

#define FOR(i, a, b) for(int i=a; i<=b; i++)
#define For(i, a, b) for(int i=a; i<b; i++)

int main ()
{
    fstream in("VANBAN.in");
    set<string> st;
    string tmp;
    while (in >> tmp)
    {
        for (int i=0; i<tmp.size(); i++) tmp[i] = tolower(tmp[i]);
        st.insert(tmp);
    }
    for(auto x : st)
    {
        cout << x << endl;
    }
}