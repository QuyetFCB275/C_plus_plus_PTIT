#include <bits/stdc++.h>

using namespace std;

#define FOR(i, a, b) for(int i=a; i<=b; i++)
#define For(i, a, b) for(int i=a; i<b; i++)

struct SinhVien
{
    string id, name, love;
    float d1, d2, d3;
};

void nhap(SinhVien &x)
{
    cin >> x.id;
    cin.ignore();
    getline(cin, x.name);
    cin >> x.love >> x.d1 >> x.d2 >> x.d3;
}

void sap_xep(SinhVien ds[], int n)
{
    for (int i=0; i<n; i++)
    {
        for (int j=i+1; j<n; j++)
        {
            if (ds[i].id > ds[j].id) 
                swap(ds[i], ds[j]);
        }
    }
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
    struct SinhVien *ds = new SinhVien[n];
    for(int i = 0; i < n; i++) {
    	nhap(ds[i]);
	}
	sap_xep(ds, n);
    in_ds(ds,n);
    return 0;
}