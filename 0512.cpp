#include <bits/stdc++.h>

using namespace std;

typedef struct
{
    long long tu, mau;
}PhanSo;

void rutgon(PhanSo &a)
{
    long long k = __gcd(a.tu, a.mau);
    a.tu /= k;
    a.mau /= k;
}

PhanSo binhphuong(PhanSo x, PhanSo y)
{
    PhanSo z;
    z.tu = x.tu * y.mau + y.tu * x.mau;
    z.mau = x.mau * y.mau;
    rutgon(z);
    // cout << z.tu << "/" << z.mau << endl;
    z.tu = pow(z.tu, 2);
    z.mau = pow(z.mau, 2);
    return z;
}

PhanSo tich(PhanSo a, PhanSo b)
{
    PhanSo c;
    c.tu = a.tu * b.tu;
    c.mau = a.mau * b.mau;
    return c;
}

void process(PhanSo a, PhanSo b)
{
    PhanSo c = binhphuong(a, b);
    cout << c.tu << "/" << c.mau << " ";
    PhanSo d;
    d = tich(a, b);
    d = tich(d, c);
    rutgon(d);
    cout << d.tu << "/" << d.mau;
    cout << endl;
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		PhanSo A;
		PhanSo B;
		cin >> A.tu >> A.mau >> B.tu >> B.mau;
		process(A, B);
	}
}