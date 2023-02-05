#include <bits/stdc++.h>

using namespace std;

#define FOR(i, a, b) for(int i=a; i<=b; i++)
#define For(i, a, b) for(int i=a; i<b; i++)

int main ()
{
    ifstream fp("PTIT.in");
    ofstream fp1("PTIT.out");
    string s;
    while (getline(fp, s))
    {
        fp1 << s << endl;
    }
    fp.close();
    fp1.close();
}