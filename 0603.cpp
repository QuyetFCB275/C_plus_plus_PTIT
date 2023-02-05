#include <bits/stdc++.h>

using namespace std;

#define FOR(i, a, b) for(int i=a; i<=b; i++)
#define For(i, a, b) for(int i=a; i<b; i++)

class PhanSo
{
    long long tu, mau;
    public:
        PhanSo(int tu, int mau)
        {
            this->tu = tu;
            this->mau = mau;
        }
    public:
        friend istream& operator >> (istream &is, PhanSo &ps)
        {
            cin >> ps.tu >> ps.mau;
            return is;
        }
        friend ostream& operator << (ostream &os, PhanSo ps)
        {
            cout << ps.tu << "/" << ps.mau;
            return os;
        }
    public:
        void rutgon()
        {
            long long k = __gcd(tu, mau);
            tu /= k;
            mau /= k;
        }
};
int main() {
	PhanSo p(1,1);
	cin >> p;
	p.rutgon();
	cout << p;
	return 0;
}