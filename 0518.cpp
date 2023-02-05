#include <bits/stdc++.h>

using namespace std;

int k=1;

struct NhanVien
{
    string id;
    string name, sex, add, thue, datehd;
    int day, month, year;
};

void nhap(NhanVien &a)
{
    cin.ignore(1);
    getline(cin, a.name);
    cin >> a.sex;
    scanf("%d/%d/%d", &a.month, &a.day, &a.year);
    cin.ignore(1);
    getline(cin, a.add);
    cin >> a.thue >> a.datehd;
    if (k<10) a.id = "0000" + to_string(k);
    else a.id = "000" + to_string(k);
    k++;
}

void sort(NhanVien &a, NhanVien &b)
{
    if (a.year == b.year)
    {
        if (a.month == b.month)
        {
            if (a.day > b.day) swap(a, b);
        }
        if (a.month > b.month) swap(a, b);
    }
    if (a.year > b.year) swap(a, b);
}

void sapxep(NhanVien ds[], int n)
{
    for (int i=0; i<n; i++)
    {
        for (int j=i+1; j<n; j++)
            sort(ds[i], ds[j]);
    }
}

void inds(NhanVien ds[], int n)
{
    for (int i=0; i<n; i++)
    {
        cout << ds[i].id << " ";
        cout << ds[i].name << " " << ds[i].sex << " ";
        if (ds[i].month < 10) cout << "0" << ds[i].month << "/";
        else cout << ds[i].month << "/";
        if (ds[i].day < 10) cout << "0" << ds[i].day << "/";
        else cout << ds[i].day << "/";
        cout << ds[i].year << " ";
        cout << ds[i].add << " " << ds[i].thue << " " << ds[i].datehd;
        cout << endl;
    }
}

int main ()
{
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    sapxep(ds, N);
    inds(ds, N);
    return 0;
}