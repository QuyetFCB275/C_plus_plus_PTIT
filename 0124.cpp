#include <bits/stdc++.h>

using namespace std;

int main()
{
    long n;
    cin >> n;
    // int k = 0;
    for (int i=2; i<=sqrt(n); i++)
    {
        if (n%i==0)
        {
            int k=0;
            while(n%i==0)
            {
                k++;
                n/=i;
            }
            cout << i << " " << k << endl;
        }
    }
    if (n>1) 
        cout << n << " " << 1;
}