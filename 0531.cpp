#include <bits/stdc++.h>

using namespace std;

struct Point
{
    double x, y, z;
};

Point doan(Point a, Point b)
{
    Point m;
    m.x = abs(a.x-b.x);
    m.y = abs(a.y-b.y);
    m.z = abs(a.z-b.z);
    return m;
}

Point phaptuyen(Point a, Point b)
{
    Point n;
    n.x = abs(a.y*b.z - b.y*a.z);
    n.y = abs(a.z*b.x - b.z*a.x);
    n.z = abs(a.x*b.y - b.x*a.y);
    return n;
}

int main ()
{
    int t;
    cin >> t;
    while(t--)
    {
        Point a, b, c, d;
            cin >> a.x >> a.y >> a.z;
            cin >> b.x >> b.y >> b.z;
            cin >> c.x >> c.y >> c.z;
            cin >> d.x >> d.y >> d.z;
        Point m1, m2, m3;
        m1 = doan(a, b);
        m2 = doan(a, c);
        m3 = doan(a, d);
        Point n1, n2;
        n1 = phaptuyen(m1, m2);
        int ans = n1.x*m3.x + n1.y*m3.y + n1.z*m3.z;
        if (!ans) cout << "YES\n";
        else cout << "NO\n";
    }
}