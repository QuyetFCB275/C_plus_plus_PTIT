#include <bits/stdc++.h>

using namespace std;

int n, x;

struct dt
{
    int id, vl;
};

bool cmp(dt a, dt b)
{
    if(abs(a.vl - x) < abs(b.vl - x)) return 1;
    if (abs(a.vl - x) == abs(b.vl - x) && a.id < b.id) return 1;
    return 0;
}

int main ()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> x;
        dt a[n+5];
        for (int i=0; i<n; i++)
        {
            cin >> a[i].vl;
            a[i].id = i;
        }
        sort(a, a+n, cmp);
        for (int i=0; i<n; i++) cout << a[i].vl << " ";
        cout << endl;
    }
}