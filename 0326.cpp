#include <bits/stdc++.h>

using namespace std;

void tich(string a, string b)
{
    if (a.size() < b.size())
        swap(a, b);
    int la = a.size(), lb = b.size();
    int c[10000] = {0};
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());
    for (int i=0; i<la; i++)
    {
        for (int j=0; j<lb; j++)
        {
            int mul = (a[i] - '0') * (b[j] - '0');
            c[i + j] += mul;
            c[i + j + 1] += c[i+j] / 10;
            c[i + j] %= 10; 
        }
    }
    if (c[la + lb - 1]) cout << c[la + lb - 1];
    // int k=0;
    for (int i=la+lb-2; i>=0; i--) 
    {
        // if (c[i] != 0) k=1;
        cout << c[i];
    }
    // if (k==0) cout << 0;
}

int main ()
{
    int t;
    cin >> t;
    while (t--)
    {
        string a, b;
        cin >> a >> b;
        tich(a, b);
        cout << endl;
    }
}