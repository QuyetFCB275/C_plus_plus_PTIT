#include <bits/stdc++.h>

using namespace std;

class Sinhvien
{
public:
    string id, name, love, email;
};

int main()
{
    Sinhvien ds[1000];
    int N, i;
    cin >> N;
    cin.ignore(1);
    for (i = 0; i < N; i++)
    {
        getline(cin, ds[i].id);
        getline(cin, ds[i].name);
        getline(cin, ds[i].love);
        getline(cin, ds[i].email);
    }
    int q;
    string a;
    cin >> q;
    while(q--)
    {
        cin >> a;
        cout << "DANH SACH SINH VIEN LOP " << a << ":\n";
        for (i = 0; i < N; i++)
        {
            if (ds[i].love == a)
                cout << ds[i].id << ' ' << ds[i].name << ' ' << ds[i].love << ' ' << ds[i].email << endl;
        }
    }
    return 0;
}