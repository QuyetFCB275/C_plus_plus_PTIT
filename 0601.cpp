#include <bits/stdc++.h>

using namespace std;

#define FOR(i, a, b) for(int i=a; i<=b; i++)
#define For(i, a, b) for(int i=a; i<b; i++)

class SinhVien
{
    string id, name, love, date;
    float gpa;
    public :
        SinhVien()
        {
            id = "011";
        }
    public:
        void nhap()
        {
            getline(cin, name);
            cin >> love >> date >> gpa;
        }
        void xuat()
        {
            cout << "B20DCCN001 " << name << " " << love << " ";
            if (date[1] == '/') date = "0" + date;
            if (date[4] == '/') date.insert(3, "0");
            cout << date << " " << fixed << setprecision(2) << gpa;
        }
};

int main(){
    SinhVien a;
    a.nhap();
    a.xuat();
    return 0;
}