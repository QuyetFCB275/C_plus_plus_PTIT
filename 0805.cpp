#include <bits/stdc++.h>

using namespace std;

#define FOR(i, a, b) for(int i=a; i<=b; i++)
#define For(i, a, b) for(int i=a; i<b; i++)

int main ()
{
    ifstream fp1, fp2;
    fp1.open("DATA1.in");
    fp2.open("DATA2.in");
    set<string> st1, st2, st3;
    string tmp;
    while(fp1 >> tmp)
    {
        for (int i=0; i<tmp.size(); i++) tmp[i] = tolower(tmp[i]);
        st1.insert(tmp);
        st2.insert(tmp);
    }
    // int k=0, l1 = st1.size(), cnt=0;
    while(fp2 >> tmp)
    {
        // k++;
        for (int i=0; i<tmp.size(); i++) tmp[i] = tolower(tmp[i]);
        if (st1.find(tmp) != st1.end()) st3.insert(tmp);
        st2.insert(tmp);

        // if (st1.size() + cnt != k + l1)
        // {
        //     st2.insert(tmp);
        //     cnt++;
        // }
    }
    for (auto x : st2)  cout << x << " ";
    cout << endl;
    for (auto x : st3)  cout << x << " ";
    fp1.close();
    fp2.close();
}