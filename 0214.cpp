#include <bits/stdc++.h>

using namespace std;

int main ()
{
    int t;
    cin >> t;
    while (t--)
    {
        long n, k;
        cin >> n >> k;
        long a[n+2];
        for (int i=1; i<=n; i++) cin >> a[i];
        long max=0, index;
        for (int i=1; i<=n-k+1; i++)
        {
            if(i==1) 
            {
                for (int j=i; j<i+k; j++)
                {
                    if (max < a[j])
                    {
                        max = a[j];
                        index = j;
                    }
                }
            }
            else 
            {
                if (index >=i)
                {
                    if (max < a[i+k-1]) 
                    {
                        max = a[i+k-1];
                        index = i+k-1;
                    }
                }
                else 
                {
                    max = 0;
                    for (int j=i; j<i+k; j++)
                    {
                        if (max < a[j])
                        {
                            max = a[j];
                            index = j;
                        }
                    }
                }
            }
            cout << max << " ";
        }
        cout << endl;
    }
}