#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--) 
    {
        long long n;
        cin >> n;
        int a[20], k=0;
        while(n>0)
        {
            a[k++] = n%10;
            n/=10;
        }
        int in;
        for (int i=0; i<k; i++) {
            if(a[i]==0 && a[i-1]==8 && a[i-2]==4) 
            {
                in = i;
                break;
            }
        }
        for (int i=k-1; i>=0; i--) 
        {
            if (i==in) i-=3;
            if (i<0) break;
            cout << a[i];
        }
        cout << endl;
    }
    
}