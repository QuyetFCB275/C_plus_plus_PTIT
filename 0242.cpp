#include <bits/stdc++.h>

using namespace std;

#define FOR(i, a, b) for(int i = a; i <= b; ++i)
#define FORD(i, a, b) for(int i = a; i >= b; --i)

int longgestsum(int a1[], int a2[], int n)
{
    int maxLen=0;
    FOR(i, 0, n-1)
    {
        int sum1=0, sum2=0;
        FOR(j, i, n-1)
        {
            sum1+=a1[j];
            sum2+=a2[j];
            if (sum1==sum2)
            {
                int len=j-i+1;
                if (len>maxLen) maxLen=len;
            }
        }
    }
    return maxLen;
}

int main ()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a1[1000], a2[1000];
        FOR(i, 0, n-1) cin >> a1[i];
        FOR(i, 0, n-1) cin >> a2[i];
        cout << longgestsum(a1, a2, n) << endl;
    }
}