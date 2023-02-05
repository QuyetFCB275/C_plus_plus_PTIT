#include <bits/stdc++.h>

using namespace std;

#define FOR(i, a, b) for(int i=a; i<=b; i++)
#define For(i, a, b) for(int i=a; i<b; i++)

struct PhanSo
{
    long long tuso, mauso;
};

void nhap(PhanSo &x)
{
    cin >> x.tuso >> x.mauso;
}

void rutgon(PhanSo &x)
{
    long k = __gcd(x.tuso, x.mauso);
    x.tuso /= k;
    x.mauso /= k;
}

void in(PhanSo &x)
{
    cout << x.tuso << "/" << x.mauso;
}

int main() {
	struct PhanSo p;
	nhap(p);
	rutgon(p);
	in(p);
	return 0;
}