#include <bits/stdc++.h>

using namespace std;

#define FOR(i, a, b) for(int i=a; i<=b; i++)
#define For(i, a, b) for(int i=a; i<b; i++)
int a[100000], b[100000] = {0};

bool cmp(int a, int c)
{
    if (b[a] != b[c]) return b[a] > b[c];
    return a < c;
}

int main ()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        for (int i=0; i<n; i++) 
        {
            cin >> a[i];
            b[a[i]]++;
        }
        sort(a, a+n, cmp);
        for (int i=0; i<100000; i++) b[i] = 0;
        for (int i=0; i<n; i++) cout << a[i] << " ";
        cout << endl;
    }
}