#include <bits/stdc++.h>

using namespace std;

int sum(long n)
{
    int k=0;
    while(n>0)
    {
        k+=n%10;
        n/=10;
    }
    return k;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long n;
        cin >> n;
        do
        {
            n=sum(n);
        } while(n>=10);
        cout << n << endl;
    }
}