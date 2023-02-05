#include <bits/stdc++.h>

using namespace std;

#define FOR(i, a, b) for(int i=a; i<=b; i++)
#define For(i, a, b) for(int i=a; i<b; i++)

struct NhanVien
{
    string name, sex, date, add, datehd;
    long thue;
};

void nhap(NhanVien &a)
{
    getline(cin, a.name);
    cin >> a.sex >> a.date;
    cin.ignore();
    getline(cin, a.add);
    cin >> a.thue >> a.datehd;
}

void in(NhanVien &a)
{
    if (a.date[1] == '/') a.date = "0" + a.date;
    if (a.date[4] == '/') a.date.insert(a.date.begin() + 3, '0');

    if (a.datehd[1] == '/') a.datehd = "0" + a.datehd;
    if (a.datehd[4] == '/') a.datehd.insert(3, "0");
    cout << "00001 " << a.name << " " << a.sex << " " << a.date << " " << a.add << " " << a.thue << " " << a.datehd; 
}

int main(){
    struct NhanVien a;
    nhap(a);
    in(a);
    return 0;
}