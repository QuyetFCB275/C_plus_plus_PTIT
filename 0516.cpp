#include <bits/stdc++.h>

using namespace std;

typedef struct
{
    int id;
    string name, kind;
    float m, b, mb;
}hanghoa;

void nhap(hanghoa ds[], int n)
{
    for (int i=1; i<=n; i++)
    {
        cin.ignore();
        ds[i].id=i;
        getline(cin, ds[i].name);
        // cin.ignore();
        getline(cin, ds[i].kind);
        cin >> ds[i].m >> ds[i].b;
        ds[i].mb = ds[i].b - ds[i].m;
    }
}

void sapxep(hanghoa ds[], int n)
{
    for (int i=1; i<=n; i++)
    {
        for (int j=i+1; j<=n; j++)
        {
            if (ds[i].mb < ds[j].mb) 
                swap(ds[i], ds[j]);
        }
    }
}

void in(hanghoa ds[], int n)
{
    for (int i=1; i<=n; i++)
    {
        cout << ds[i].id << " " << ds[i].name << " " << ds[i].kind << " ";
        cout << fixed << setprecision(2) << ds[i].mb;
        cout << endl; 
    }
}

int main ()
{
    int n;
    cin >> n;
    hanghoa ds[n+5];
    nhap(ds, n);
    sapxep(ds, n);
    in(ds, n);
}