#include <bits/stdc++.h>

using namespace std;

int main ()
{
    int n;
    cin >> n;
    int cnt=0;
    while (n--)
    {
        int k, a[10]={0};
        for (int i=1; i<=3; i++)
        {
            cin >> k;
            a[k]++;
        }
        if (a[1] > a[0]) cnt++;
    }
    cout << cnt;
}