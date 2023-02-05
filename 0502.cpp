#include <bits/stdc++.h>

using namespace std;

#define FOR(i, a, b) for(int i=a; i<=b; i++)
#define For(i, a, b) for(int i=a; i<b; i++)

struct ThiSinh
{
    string name;
    string date;
    float d1, d2, d3;
};

void nhap(ThiSinh &a)
{
    getline(cin, a.name);
    cin >> a.date >> a.d1 >> a.d2 >> a.d3;
}

void in(ThiSinh &a)
{
    cout << a.name << " " << a.date << " ";
    cout << fixed << setprecision(1) << (float) (a.d1 + a.d2 + a.d3);
}
int main(){
    ThiSinh A;
    nhap(A);
    in(A);
    return 0;
}