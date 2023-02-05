#include <bits/stdc++.h>

using namespace std;

#define FOR(i, a, b) for(int i=a; i<=b; i++)
#define For(i, a, b) for(int i=a; i<b; i++)

struct sv
{
    int stt;
    string id, name, love, email, dn;
};

bool condi(sv a, sv b)
{
    return a.name < b.name;
}

void nhap(sv a[], int n)
{
    for (int i=0; i<n; i++)
    {
        // Chưa hiểu sao cách nhập này sai
        // a[i].stt = i+1;
        // getline(cin, a[i].id);
        // getline(cin, a[i].name);
        // cin >> a[i].love >> a[i].email >> a[i].dn;
        a[i].stt = i + 1;
        getline(cin, a[i].id);
        getline(cin, a[i].name);
        getline(cin, a[i].love);
        getline(cin, a[i].email);
        getline(cin, a[i].dn);
    }
}

void in(sv a[], int n, string k)
{
    for (int i=0; i<n; i++)
    {
        if (a[i].dn == k)
        {
            cout << a[i].stt << " " << a[i].id << " ";
            cout << a[i].name << " " << a[i].love << " ";
            cout << a[i].email << " " << k;
            cout << endl;
        }
    }
}

int main ()
{
    int n;
    cin >> n;
    cin.ignore(1);
    sv a[n+5];
    nhap(a, n);
    sort(a, a+n, condi);
    int q;
    cin >> q;
    while (q--)
    {
        string k;
        cin >> k;
        in(a, n, k);
    }
}