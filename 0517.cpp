#include <bits/stdc++.h>

using namespace std;

struct NhanVien
{
    string id, name, sex, date, add, thue, day;
};

void nhap(NhanVien &a)
{
    cin.ignore();
    getline(cin, a.name);
    cin >> a.sex >> a.date;
    cin.ignore();
    getline(cin, a.add);
    cin >> a.thue >> a.day;
}

void inds(NhanVien ds[], int n)
{
    for (int i=0; i<n; i++)
    {
        if (i<9) ds[i].id = "0000" + to_string(i+1);
        else ds[i].id = "000" + to_string(i+1);
        cout << ds[i].id << " " << ds[i].name << " ";
        cout << ds[i].sex << " " << ds[i].date << " ";
        cout << ds[i].add << " " << ds[i].thue << " " << ds[i].day;
        cout << endl;
    }
}

int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    inds(ds,N);
    return 0;
}