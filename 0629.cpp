#include <bits/stdc++.h>

using namespace std;

#define FOR(i, a, b) for (int i = a; i <= b; i++)
#define For(i, a, b) for (int i = a; i < b; i++)

class business
{
public:
    string id, name;
    int sum;
};

bool cmp(business a, business b)
{
    if (a.sum == b.sum)
        return a.id < b.id;
    return a.sum > b.sum;
}

int main()
{
    int n;
    cin >> n;
    // cin.ignore(1);
    business ds[1000];
    For(i, 0, n)
    {
        cin >> ds[i].id;
        cin.ignore();
        getline(cin, ds[i].name);
        cin >> ds[i].sum;
    }

    sort(ds, ds + n, cmp);

    int q;
    cin >> q;
    while (q--)
    {
        int a, b;
        cin >> a >> b;
        cout << "DANH SACH DOANH NGHIEP NHAN TU " << a << " DEN " << b << " SINH VIEN:\n";
        For(i, 0, n)
            if (ds[i].sum >= a && ds[i].sum <= b)
                cout << ds[i].id << " " << ds[i].name << " " << ds[i].sum << endl;
    }
}