#include <bits/stdc++.h>

using namespace std;

#define FOR(i, a, b) for(int i = a; i <= b; ++i)
#define FORD(i, a, b) for(int i = a; i >= b; --i)
#define For(i, a, b) for(int i = a; i < b; ++i)
#define Ford(i, a, b) for(int i = a; i > b; --i)

int main ()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[200][200];
        long sum1=0;
        For(i, 0, n)
        {
            For(j, 0, n)
            {
                cin >> a[i][j];
                sum1+=a[i][j];
            }
        }

        // int min=0;
        // For(i, 0, n)
        // {
        //     int Min=a[i][0];
        //     For(j, 1, n)
        //     {
        //         if (a[i][j] < Min) Min=a[i][j];
        //     }
        //     if (Min > min) min = Min;
        // }
        // For(j, 0, n)
        // {
        //     int Min=a[0][j];
        //     For(i, 1, n)
        //     {
        //         if (a[i][j] < Min) Min=a[i][j];
        //     }
        //     if (Min > min) min = Min;
        // }
        // For(i, 0, n)
        // {
        //     For(j, 0, n)
        //     {
        //         if (a[i][j] < min) a[i][j]=min;
        //     }
        // } Phần này bỏ nhá kk
        long sum2=0;
        For(i, 0, n)
        {
            int cnt=0;
            For(j, 0, n)
            {
                cnt+=a[i][j];
            }
            if (sum2 < cnt) sum2=cnt;
        }
        For(j, 0, n)
        {
            int cnt=0;
            For(i, 0, n)
            {
                cnt+=a[i][j];
            }
            if (sum2 < cnt) sum2=cnt;
        }
        cout << (sum2 * n - sum1) << endl;
    }
}

// 1 2      4 3
// 3 4      3 4
// 1 2 3    1 2 5
// 4 3 1    4 3 1
// 3 2 1    3 3 2

// 1 2 3    2 4 3
// 4 2 1    4 3 2
// 3 2 1    3 2 4

// 2 4 3  2 4 3
// 2 2 1  3 2 4
// 1 1 1  4 3 2