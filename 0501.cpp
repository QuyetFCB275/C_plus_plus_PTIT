#include <bits/stdc++.h>

using namespace std;

#define FOR(i, a, b) for(int i=a; i<=b; i++)
#define For(i, a, b) for(int i=a; i<b; i++)

struct Point
{
    double x, y;
};

void input(Point &m)
{
    cin >> m.x >> m.y;
}

double distance(Point a, Point b)
{
    double k = pow((a.x - b.x), 2) + pow((a.y - b.y), 2);
    return sqrt(k);
}

int main(){
    struct Point A, B;
    int t;
    cin>>t;
    while(t--){
        input(A); input(B);
        cout << fixed << setprecision(4) << distance(A,B) << endl;
    }
    return 0;
}