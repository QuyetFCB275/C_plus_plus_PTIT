#include <bits/stdc++.h>

using namespace std;

#define FOR(i, a, b) for(int i=a; i<=b; i++)
#define For(i, a, b) for(int i=a; i<b; i++)

struct people
{
    string name;
    int d, m, y;
    string k;
};

int main ()
{
    int n;
    cin >> n;
    int imin, imax;
    string max = "00000000", min = "99999999";
    people a[n+5];
    for (int i=0; i<n; i++)
    {
        cin >> a[i].name;
        scanf("%d/%d/%d", &a[i].d, &a[i].m, &a[i].y);
        string d1, m1;
        if (a[i].d < 10) d1 = "0" + to_string(a[i].d);
        else d1 = to_string(a[i].d);

        if (a[i].m < 10) m1 = "0" + to_string(a[i].m);
        else m1 = to_string(a[i].m);
        a[i].k = to_string(a[i].y) + m1 + d1;
        // cout << a[i].k << endl;
        if (a[i].k < min)
        {
            min = a[i].k;
            imin = i;
        }
        if (a[i].k > max)
        {
            max = a[i].k;
            imax = i;
        }
    }
    cout << a[imax].name << endl;
    cout << a[imin].name;
}