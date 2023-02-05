#include <bits/stdc++.h>

using namespace std;

#define FOR(i, a, b) for(int i=a; i<=b; i++)
#define For(i, a, b) for(int i=a; i<b; i++)

class SinhVien
{
    string id, name, love, date;
    float gpa;
    public:
        SinhVien()
        {
            id = "B20DCCN001";
            name = "";
            love = "";
            date = "";
            gpa = 0;
        }
    public:
        friend istream& operator >> (istream &is, SinhVien &sv)
        {
            getline(cin, sv.name);
            cin >> sv.love >> sv.date >> sv.gpa;
            return is;
        }
        friend ostream& operator << (ostream &os, SinhVien sv)
        {
            cout << sv.id << " " << sv.name << " " << sv.love << " ";
            if (sv.date[1] == '/') sv.date = "0" + sv.date;
            if (sv.date[4] == '/') sv.date.insert(3, "0");
            cout << sv.date << " " << fixed << setprecision(2) << sv.gpa;
            return os;
        }
        
};
int main(){
    SinhVien a;
    cin >> a;
    cout << a;
    return 0;
}