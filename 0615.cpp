#include <bits/stdc++.h>

using namespace std;

int k = 0;

class NhanVien
{
public:
    string id = "000", name, sex, date, add, thue, day;
    int mm, dd, yy;

public:
    friend istream &operator>>(istream &is, NhanVien &nv)
    {
        cin.ignore(1);
        k++;
        if (k < 10)
            nv.id = nv.id + "0" + to_string(k);
        else
            nv.id = nv.id + to_string(k);
        getline(cin, nv.name);
        cin >> nv.sex >> nv.date;
        cin.ignore(1);
        getline(cin, nv.add);
        cin >> nv.thue >> nv.day;
        return is;
    }

    friend ostream &operator<<(ostream &os, NhanVien nv)
    {
        cout << nv.id << " " << nv.name << " " << nv.sex << " ";
        cout << nv.date << " " << nv.add << " " << nv.thue << " " << nv.day;
        cout << endl;
        return os;
    }
};

bool cmp(NhanVien a, NhanVien b)
{
    string s1 = a.date.substr(6, 10) + a.date.substr(0, 2) + a.date.substr(3, 5);
    string s2 = b.date.substr(6, 10) + b.date.substr(0, 2) + b.date.substr(3, 5);
    return s1 < s2;
}

void sapxep(NhanVien ds[], int n)
{
    sort(ds, ds + n, cmp);
}

int main()
{
    NhanVien ds[50];
    int N, i;
    cin >> N;
    for (i = 0; i < N; i++)
        cin >> ds[i];
    sapxep(ds, N);
    for (i = 0; i < N; i++)
        cout << ds[i];
    return 0;
}