#include <bits/stdc++.h>

using namespace std;

#define FOR(i, a, b) for (int i = a; i <= b; i++)
#define For(i, a, b) for (int i = a; i < b; i++)

class giangvien
{
public:
    string id = "GV", name, firstname = "", mon = "";
};

bool cmp(giangvien a, giangvien b)
{
    if (a.firstname == b.firstname)
        return a.id < b.id;
    return a.firstname < b.firstname;
}

int main()
{
    int n;
    cin >> n;
    cin.ignore();
    giangvien ds[100];
    FOR(i, 1, n)
    {
        if (i < 10)
            ds[i].id = ds[i].id + "0" + to_string(i);
        else
            ds[i].id = ds[i].id + to_string(i);
        getline(cin, ds[i].name);
        int k = ds[i].name.rfind(' ');
        ds[i].firstname = ds[i].name.substr(k);

        string sub;
        getline(cin, sub);
        stringstream ss(sub);
        string tmp;
        while (ss >> tmp)
        {
            ds[i].mon += toupper(tmp[0]);
        }
    }

    sort(ds + 1, ds + n + 1, cmp);

    FOR(i, 1, n)
    cout << ds[i].id << " " << ds[i].name << " " << ds[i].mon << endl;
}