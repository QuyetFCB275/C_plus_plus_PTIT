#include <bits/stdc++.h>

using namespace std;

#define FOR(i, a, b) for(int i=a; i<=b; i++)
#define For(i, a, b) for(int i=a; i<b; i++)

struct SinhVien
{
    string id = "B20DCCN0";
    string name, love, date;
    float gpa;
};

void nhap(SinhVien ds[], int n)
{
    for (int i=1; i<=n; i++)
    {
        cin.ignore(1);
        getline(cin, ds[i].name);
        cin >> ds[i].love >> ds[i].date >> ds[i].gpa;
        if (i<10)
        {
            ds[i].id.push_back('0');
            ds[i].id += to_string(i);
        }
        else
        {
            ds[i].id += to_string(i/10);
            ds[i].id += to_string(i%10);
        }
    }
}

void in(SinhVien ds[], int n)
{
    for (int i=1; i<=n; i++)
    {
        if (ds[i].date[1] == '/') ds[i].date = '0' + ds[i].date;
        if (ds[i].date[4] == '/') ds[i].date.insert(3, "0");
        cout << ds[i].id << " " << ds[i].name  << " " << ds[i].love << " ";
        cout << ds[i].date << " " << fixed << setprecision(2) << ds[i].gpa;
        cout << endl;
    }
}

int main ()
{
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    in(ds, N);
    return 0;
}