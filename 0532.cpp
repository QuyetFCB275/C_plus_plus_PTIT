// Công thức tính diện tích tam giác biết tọa độ 3 điểm :
//     S = 1/2 * |(xB - xA)(yC - yA) - (xC - xA)(yB - yA)|;

#include <bits/stdc++.h>

using namespace std;

#define FOR(i, a, b) for(int i=a; i<=b; i++)
#define For(i, a, b) for(int i=a; i<b; i++)

struct Point
{
    double x, y;
};

double dientich(Point a, Point b, Point c)
{
    double S = (b.x - a.x)*(c.y - a.y) - (c.x - a.x)*(b.y - a.y);
    return 0.5 * S;
}

int main ()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        Point a[n+5];
        for (int i=0; i<n; i++)
        {
            cin >> a[i].x >> a[i].y;
        }
        double S=0;
        int i=1;
        for (i; i<n-1; i++)
        {
            // double s = dientich(a[0], a[i], a[i+1]);
            S += dientich(a[0], a[i], a[i+1]);;
        }
        cout << fixed << setprecision(3) << S << endl;
    }
}