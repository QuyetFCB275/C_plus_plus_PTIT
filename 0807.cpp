#include <bits/stdc++.h>

using namespace std;

#define FOR(i, a, b) for(int i=a; i<=b; i++)
#define For(i, a, b) for(int i=a; i<b; i++)

int main ()
{
    ifstream fp1("DATA.in");
    int a, m, n, b[10000]={0};
    unordered_map<int, int> kp1;
    fp1 >> m >> n;
    set<int> st;
    while (m--)
    {
        fp1 >> a;
        kp1[a]++;
    }
    while (n--)
    {
        fp1 >> a;
        if (kp1[a]) st.insert(a);
    }
    for(int x : st) cout << x << " ";
}