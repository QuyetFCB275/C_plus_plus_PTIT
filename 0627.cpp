#include <bits/stdc++.h>

using namespace std;

#define FOR(i, a, b) for(int i=a; i<=b; i++)
#define For(i, a, b) for(int i=a; i<b; i++)

class giangvien
{
    public:
    string id = "GV", name, name1, mon = "";
};

int main ()
{
    int n;
    cin >> n;
    cin.ignore();
    giangvien ds[100];
    FOR(i, 1, n)
    {
        if (i<10) ds[i].id = ds[i].id + "0" + to_string(i);
        else ds[i].id = ds[i].id + to_string(i);
        getline(cin, ds[i].name);
        ds[i].name1 = ds[i].name;
        for(int j=0; j<ds[i].name1.size(); j++) ds[i].name1[j] = tolower(ds[i].name1[j]);

        string sub;
        getline(cin, sub);
        stringstream ss(sub);
        string tmp;
        while(ss >> tmp)
        {
            ds[i].mon += toupper(tmp[0]);
        }
    }

    int q;
    cin >> q;
    cin.ignore();
    while(q--)
    {
        string s;
        cin >> s;
        cout << "DANH SACH GIANG VIEN THEO TU KHOA " << s << ":\n";
        for (int i=0; i<s.size(); i++) s[i] = tolower(s[i]);
        FOR(i, 1, n)
        {
            if (ds[i].name1.find(s) != string::npos)
                cout << ds[i].id << " " << ds[i].name << " " << ds[i].mon << endl;
        }
    }
}