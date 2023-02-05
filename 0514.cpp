#include <bits/stdc++.h>

using namespace std;

#define FOR(i, a, b) for(int i=a; i<=b; i++)
#define For(i, a, b) for(int i=a; i<b; i++)

struct SinhVien
{
    string id = "B20DCCN0", name, love, date;
    float gpa;
};

void solve(string s)
{
    // set<string> st;
    stringstream ss(s);
    string tmp;
    while (ss >> tmp)
    {
        for (int i=0; i<tmp.size(); i++)
        {
            if (i==0) tmp[i] = toupper(tmp[i]);
            else tmp[i] = tolower(tmp[i]);
            // cout << tmp[i];
        }
        cout << tmp << " ";
    }
}

void nhap(SinhVien ds[], int n)
{
    for (int i=1; i<=n; i++)
    {
        cin.ignore(1);
        getline(cin, ds[i].name);
        // ds[i].name = solve(ds[i].name);
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
        if (ds[i].date[1] == '/') ds[i].date = '0' + ds[i].date;
        if (ds[i].date[4] == '/') ds[i].date.insert(3, "0");
    }
}

void in(SinhVien ds[], int n)
{
    for (int i=1; i<=n; i++)
    {
        cout << ds[i].id << " ";
        solve(ds[i].name);
        cout << ds[i].love << " ";
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