#include <bits/stdc++.h>

using namespace std;

int max(int a[], int l, int r)
{
    int max=a[l], index=l;
    for (int i=l; i<=r; i++)
    {
        if (a[i]>max) 
        {
            max = a[i];
            index = i;
        }
    }
    return index;
}

int mountain(int a[], int l, int r)
{
    int index = max(a, l, r);
    for (int i=l; i<index; i++)
    {
        if (a[i] > a[i+1]) return 0;
    }
    for (int i=index; i<r; i++)
    {
        if (a[i] < a[i+1]) return 0;
    }
    return 1;
}

int main ()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[10000];
        for (int i=0; i<n; i++) cin >> a[i];
        int l, r;
        cin >> l >> r;
        if (mountain(a, l, r)) cout << "Yes\n";
        else cout << "No\n";
    }
}