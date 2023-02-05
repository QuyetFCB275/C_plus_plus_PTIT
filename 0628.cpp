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

    For(i, 0, n)
            cout
        << ds[i].id << " " << ds[i].name << " " << ds[i].sum << endl;
}