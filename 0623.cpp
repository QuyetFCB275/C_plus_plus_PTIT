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
    while (q--)
    {
        string a;
        cin >> a;
        cout << "DANH SACH SINH VIEN KHOA " << a << ":\n";
        string s1 = a.substr(2);
        for (int i = 0; i < n; i++)
        {
            string s2 = ds[i].love.substr(1, 2);
            if (s2 == s1)
            {
                cout << ds[i].id << " " << ds[i].name << " " << ds[i].love << " " << ds[i].email;
                cout << endl;
            }
        }
    }
}