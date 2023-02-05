#include <bits/stdc++.h>

using namespace std;

class Sinhvien
{
public:
    string id, name, love, email;

public:
    friend istream &
    operator>>(istream &is, Sinhvien &sv)
    {
        cin >> sv.id;
        cin.ignore(1);
        getline(cin, sv.name);
        cin >> sv.love >> sv.email;
        return is;
    }

    friend ostream &operator<<(ostream &os, Sinhvien sv)
    {
        cout << sv.id << " " << sv.name << " " << sv.love << " " << sv.email;
        cout << endl;
        return os;
    }
};

bool cmp(Sinhvien a, Sinhvien b)
{
    return a.id < b.id;
}

void sapxep(Sinhvien ds[], int n)
{
    sort(ds, ds + n, cmp);
}

int main()
{
    Sinhvien ds[1000], x;
    int n=0, i;
    while(cin >> x)
    {
        ds[n++] = x;
    }
    sapxep(ds, n);
    for (i=0; i<n; i++)
        cout << ds[i];
    return 0;
}