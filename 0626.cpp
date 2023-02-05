#include <bits/stdc++.h>

using namespace std;

#define FOR(i, a, b) for(int i=a; i<=b; i++)
#define For(i, a, b) for(int i=a; i<b; i++)

class giangvien
{
    public:
    string id = "GV", name, firstname = "", mon = "";
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
        int k = ds[i].name.rfind(' ');
        ds[i].firstname = ds[i].name.substr(k);

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
    while (q--)
    {
        string s, s1 = "";
        getline(cin, s);
        stringstream ss1(s);
        string tmp1;
        while (ss1 >> tmp1)
        {
            s1 += toupper(tmp1[0]);
        }
        
        cout << "DANH SACH GIANG VIEN BO MON " << s1 << ":\n";
        FOR(i, 1, n)
        {
            if (ds[i].mon == s1)
                cout << ds[i].id << " " << ds[i].name << " " << ds[i].mon << endl;
        }
    }
    

    // sort(ds+1, ds + n+1, cmp);

    // FOR(i, 1, n)
    //     cout << ds[i].id << " " << ds[i].name << " " << ds[i].mon << endl;
}