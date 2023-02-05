#include <bits/stdc++.h>

using namespace std;

class PhanSo
{
    long tu, mau;

public:
    PhanSo(long tu, long mau)
    {
        this->tu = tu;
        this->mau = mau;
    }

    friend istream &operator>>(istream &is, PhanSo &ps)
    {
        cin >> ps.tu >> ps.mau;
        return is;
    }

    friend ostream &operator<<(ostream &os, PhanSo ps)
    {
        cout << ps.tu << "/" << ps.mau;
        return os;
    }

    void rutgon()
    {
        long long k = __gcd(tu, mau);
        tu /= k;
        mau /= k;
    }

    // Cách 1: nạp chồng toán tử 1 ngôi
    // PhanSo operator+(PhanSo &ps)
    // {
    //     PhanSo kq(1, 1);
    //     kq.tu = this->tu * ps.mau + ps.tu * this->mau;
    //     kq.mau = this->mau * ps.mau;
    //     kq.rutgon();
    //     return kq;
    // }

    // Cách 2: nạp chồng toán tử 2 ngôi
    friend PhanSo operator+(PhanSo ps1, PhanSo ps2)
    {
        PhanSo kq(1, 1);
        kq.tu = ps1.tu * ps2.mau + ps2.tu * ps1.mau;
        kq.mau = ps1.mau * ps2.mau;
        kq.rutgon();
        return kq;
    }
};

int main()
{
    PhanSo p(1, 1), q(1, 1);
    cin >> p >> q;
    cout << p + q;
    return 0;
}