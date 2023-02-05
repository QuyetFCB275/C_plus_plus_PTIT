#include <bits/stdc++.h>

using namespace std;

#define FOR(i, a, b) for(int i=a; i<=b; i++)
#define For(i, a, b) for(int i=a; i<b; i++)

int main ()
{
   int t;
   cin >> t;
   while (t--)
   {
        int n;
        cin >> n;
        long long b[n] = {0}, a[n];
        for (int i=0; i<n; i++)
        {
            cin >> a[i];
            b[i] = -1;
        }
        for (int i=0; i<n; i++)
        {
            for (int j=0; j<n; j++)
            {
                if (a[j] == i)
                    b[i] = i;
            }
        }
        for (int i=0; i<n; i++) cout << b[i] << " ";
        cout << endl;
   }
   
}