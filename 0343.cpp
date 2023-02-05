#include <bits/stdc++.h>

using namespace std;

#define FOR(i, a, b) for(int i=a; i<=b; i++)
#define For(i, a, b) for(int i=a; i<b; i++)

int main ()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        string s;
        getline(cin, s);
        stringstream ss(s);
        string tmp;
        int l=0, chan=0, le=0;
        while (ss >> tmp)
        {
            l++;
            char str[100];
            strcpy(str, tmp.c_str());
            int k = atoi(str);
            if (k % 2 == 0) chan++;
            else le++;
        }
        if (l % 2 == 0 && chan > le || l % 2 == 1 && chan < le) cout << "YES\n";
        else cout << "NO\n";
    }
}

// #include<bits/stdc++.h> 

// #define ll long long 

// using namespace std; 

// main()
// { 
//     int t; 
//     cin>>t; 
//     while(t--)
//     { 
//         int n=0,c=0,l=0; 
//         char kitu=' '; 
//         while(kitu!='\n')
//         { 
//             int x; 
//             cin>>x; 
//             n++; 
//             if(x%2==0) c++; 
//             else l++; 
//             kitu=getchar(); 
//         } 
//         if((n%2==0&&c>l)||(n%2==1&&c<l)) cout<<"YES"<<endl; 
//         else cout<<"NO"<<endl; 
//     } 
// }