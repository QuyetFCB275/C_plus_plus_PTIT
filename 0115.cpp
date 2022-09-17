#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--)
    {
        long n;
        cin >> n;
        int i=2;
        while (n>1)
        {
            int k=0;
            while(n%i==0) 
            {
                n/=i;
                k++;
            }
            if(k>0)
            {
                cout << i << " " << k << " ";
            }
            i++;
        }
        cout << endl;
    }
    
}