#include <bits/stdc++.h>

using namespace std;

#define FOR(i, a, b) for(int i=a; i<=b; i++)
#define For(i, a, b) for(int i=a; i<b; i++)

class NhanVien
{
    string id = "00001";
    string name, sex, date, add, thue, datehd;

    public:
        friend istream &operator >> (istream &is, NhanVien &nv)
        {
            getline(cin, nv.name);
            cin >> nv.sex >> nv.date;
            cin.ignore();
            getline(cin, nv.add);
            cin >> nv.thue >> nv.datehd;
            return is;
        }
        friend ostream &operator << (ostream &os, NhanVien nv)
        {
            cout << nv.id << " " << nv.name << " " << nv.sex <<  " " << nv.date << " ";
            cout << nv.add << " " << nv.thue << " " << nv.datehd;
            return os;
        }
};

int main(){
    NhanVien a;
    cin >> a;
    cout << a;
    return 0;
}