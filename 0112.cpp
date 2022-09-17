#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        double a[2], b[2];
        cin >> a[0] >> a[1] >> b[0] >> b[1];
        double m = abs(a[0] - b[0]), n = abs(a[1] - b[1]);
        double kc = sqrt(pow(m, 2) + pow(n, 2));
        cout << setprecision(4) << fixed << kc << endl;
    }
}