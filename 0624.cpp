#include <bits/stdc++.h>

using namespace std;

#define FOR(i, a, b) for (int i = a; i <= b; i++)
#define For(i, a, b) for (int i = a; i < b; i++)

class Sinhvien
{
public:
    string id, name, love, email;
};

int main()
{
    int n;
    cin >> n;
    cin.ignore(1);
    Sinhvien ds[1000];
    for (int i = 0; i < n; i++)
    {
        getline(cin, ds[i].id);
        getline(cin, ds[i].name);
        getline(cin, ds[i].love);
        getline(cin, ds[i].email);
    }

    int q;
    cin >> q;
    cin.ignore(1);
    while (q--)
    {
        string a;
        getline(cin, a);
        for (int i=0; i<a.size(); i++) a[i] = toupper(a[i]);

        cout << "DANH SACH SINH VIEN NGANH " << a << ":\n";
        for (int i = 0; i < n; i++)
        {
            string s2 = ds[i].id.substr(5, 2);
            if(ds[i].love[0] == 'E' && (ds[i].id[5] == 'C' || ds[i].id[5] == 'A')) continue;
            if (s2[0] == a[0])
            {
                cout << ds[i].id << " " << ds[i].name << " " << ds[i].love << " " << ds[i].email;
                cout << endl;
            }
        }
    }
}