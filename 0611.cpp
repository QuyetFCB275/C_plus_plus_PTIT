#include <bits/stdc++.h>

using namespace std;

#define FOR(i, a, b) for (int i = a; i <= b; i++)
#define For(i, a, b) for (int i = a; i < b; i++)

int k = 0;

class SinhVien
{
    string id, name, love, date;
    float gpa;

public:
    SinhVien()
    {
        id = "B20DCCN0";
        name = "";
        love = "";
        date = "";
        gpa = 0;
    }

public:
    friend istream &operator>>(istream &is, SinhVien &sv)
    {
        getchar();
        k++;
        if(k<10) sv.id = sv.id + "0" + to_string(k);
        else sv.id = sv.id + to_string(k);
        getline(cin, sv.name);
        cin >> sv.love >> sv.date >> sv.gpa;
        return is;
    }
    friend ostream &operator<<(ostream &os, SinhVien sv)
    {
        if (sv.date[1] == '/') sv.date = "0" + sv.date;
        if (sv.date[4] == '/') sv.date.insert(3, "0");
        cout << sv.id << " " << sv.name << " " << sv.love << " " << sv.date << " ";
        cout << fixed << setprecision(2) << sv.gpa << endl;
        return os;
    }
};

int main()
{
    SinhVien ds[50];
    int N, i;
    cin >> N;
    for (i = 0; i < N; i++)
    {
        cin >> ds[i];
    }
    for (i = 0; i < N; i++)
    {
        cout << ds[i];
    }
    return 0;
}