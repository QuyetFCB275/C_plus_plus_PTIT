#include <bits/stdc++.h>

using namespace std;

#define F(i, a, b) for(int i = a; i < b; ++i)

struct SinhVien
{
    string id, name, love;
    float d1, d2, d3;
};

bool cmp(SinhVien a, SinhVien b)
{
    return a.name < b.name;
}

void nhap(SinhVien &x)
{
    cin.ignore();
    getline(cin, x.id);
    getline(cin, x.name);
    cin >> x.love >> x.d1 >> x.d2 >> x.d3;
}

void in_ds(SinhVien ds[], int n)
{
    for (int i=0; i<n; i++)
    {
        cout << (i+1) << " ";
        cout << ds[i].id << " " << ds[i].name << " " << ds[i].love << " ";
        cout << fixed << setprecision(1) << ds[i].d1 << " " << ds[i].d2 << " " << ds[i].d3;
        cout << endl;
    }
}

int main(){
    int n;
    cin >> n;
    SinhVien ds[n];
    for(int i = 0; i < n; i++) {
    	nhap(ds[i]);
	}
    // F(i, 0, n)
    // {
    //     cin.ignore();
    //     getline(cin, ds[i].id);
    //     getline(cin, ds[i].name);
    //     getline(cin, ds[i].love);
    //     cin >> ds[i].d1 >> ds[i].d2 >> ds[i].d3;
    // }
	sort(ds, ds + n, cmp);
    in_ds(ds,n);
    return 0;
}