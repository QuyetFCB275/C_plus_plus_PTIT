#include <bits/stdc++.h>

using namespace std;

#define FOR(i, a, b) for(int i=a; i<=b; i++)
#define For(i, a, b) for(int i=a; i<b; i++)

struct tg
{
    int h, m, s;
};

bool condi(tg a, tg b)
{
    if (a.h == b.h)
    {
        if (a.m == b.m)
        {
            if (a.s > b.s) return false;
        }
        if (a.m > b.m) return false;
    }
    if (a.h > b.h) return false;
    return true;
}

void nhap(tg a[], int n)
{
    for (int i=0; i<n; i++)
    {
        cin >> a[i].h >> a[i].m >> a[i].s;
    }
}

void in(tg a[], int n)
{
    for (int i=0; i<n; i++)
    {
        cout << a[i].h << " " <<  a[i].m << " " << a[i].s;
        cout << endl;
    }
}

int main ()
{
    int n;
    cin >> n;
    tg a[n+5];
    nhap(a, n);
    sort(a, a+n, condi);
    in(a, n);
}