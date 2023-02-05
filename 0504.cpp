#include <bits/stdc++.h>

using namespace std;

#define FOR(i, a, b) for(int i=a; i<=b; i++)
#define For(i, a, b) for(int i=a; i<b; i++)

struct SinhVien
{
    string name;
    string love;
    string date;
    float gpa;
};

void nhap(SinhVien &a)
{
    getline(cin, a.name);
    cin >> a.love >> a.date >> a.gpa;
}

void in(SinhVien &a)
{
    cout << "B20DCCN001 " << a.name << " " << a.love << " ";
    size_t pos = 0;
    string token[3];
    string ngaysinh = "";
    int k=0;
    while ((pos = a.date.find('/')) != string::npos)
    {
        token[k] = a.date.substr(0, pos);
        if (token[k].size() == 1) token[k] = "0" + token[k];
        a.date.erase(0, pos + 1);
        k++;
    }
    ngaysinh = token[0] + "/" + token[1] + "/" + a.date;
    cout << ngaysinh << " " << fixed << setprecision(2) << a.gpa;
}

int main(){
    struct SinhVien a;
    nhap(a);
    in(a);
    return 0;
}