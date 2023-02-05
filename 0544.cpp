#include <bits/stdc++.h>

using namespace std;

#define FOR(i, a, b) for(int i=a; i<=b; i++)
#define For(i, a, b) for(int i=a; i<b; i++)

#define PI 3.141592653589793238

struct toado
{
    double h, t;
};

double canh(toado x, toado y)
{
    double m;
    m = pow((x.h - y.h), 2) + pow((x.t - y.t), 2);
    m = sqrt(m);
    return m;
}

int dk(double a, double b, double c)
{
    if ((a+b<=c) || (c+b<=a) || (a+c<=b)) return 0;
    return 1;
}

int main ()
{
    int t;
    cin >> t;
    while (t--)
    {
        toado a, b, c;
        cin >> a.h >> a.t >> b.h >> b.t >> c.h >> c.t;
        double ab, bc, ca;
        ab = canh(a, b), bc = canh(b, c), ca = canh(c, a);
        // cout << ab << " " << bc << " " << ca; 
        if (!dk(ab, bc, ca)) cout << "INVALID" << endl;
        else 
        {
            double S = sqrt((ab+bc+ca)*(ab+bc-ca)*(ab+ca-bc)*(bc+ca-ab));
            S = S/4;
            double R = (ab*bc*ca)/(4*S);
            double s = PI * R * R;
            // cout << S << " " << R << endl;
            cout << fixed << setprecision(3) << s << endl;
            // double q = 7.6566;
            // cout << q;
        }
    }
}