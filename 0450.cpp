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
        int a[n+5], b[100000]={0};
        for (int i=0; i<n; i++)
        {
            cin >> a[i];
        }
        int k=1;
        for (int i=0; i<n; i++)
        {
            b[a[i]]++;
            if (b[a[i]] == 2)
            {
                k=0;
                cout << a[i] << endl;
                break;
            }
        }
        if (k) cout << -1 << endl;
    } 
}

Cách 2 dùng Set
// #include<bits/stdc++.h> 

// using namespace std; 

// int main()
// { 
//     int t; cin>>t; 
//     while(t--)
//     { 
//         int n; cin>>n; 
//         int a[n+1]; 
//         for(int i=1;i<=n;i++) cin>>a[i]; 
//         set<int> s; 
//         int u=0; 
//         for(int i=1;i<=n;i++)
//         { 
//             s.insert(a[i]); 
//             if(i-s.size()==1)
//             { 
//                 u=i; break; 
//             } 
//         } 
//         if(s.size()==n) cout<<"-1"<<"\n"; 
//         else cout<<a[u]<<"\n"; 
//     } 
// }