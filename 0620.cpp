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
    if (a.love == b.love) 
        return a.id < b.id;
    return a.love < b.love;
}

void sapxep(Sinhvien ds[], int n)
{
    sort(ds, ds + n, cmp);
}

int main()
{
    Sinhvien ds[1000];
    int N, i;
    cin >> N;
    for (i = 0; i < N; i++)
        cin >> ds[i];
    sapxep(ds, N);
    for (i = 0; i < N; i++)
        cout << ds[i];
    return 0;
}