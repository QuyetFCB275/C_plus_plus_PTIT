#include <bits/stdc++.h>

using namespace std;

void quicksort(int a[], int left, int right)
{
    int l=left, r=right;
    int pivot = a[(l+r) / 2];
    while (l<=r)
    {
        while (a[l] < pivot) l++;
        while (a[r] > pivot) r--;
        if (l<=r) 
        {
            swap(a[l], a[r]);
            l++;
            r--;
        }
    }

    if (left<r) quicksort(a, left, r);
    if (l<right) quicksort(a, l, right);
}

int main ()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int a[10000];
        for (int i=0; i<n*n; i++) cin >> a[i];
        quicksort(a, 0, n*n-1);
        // for (int i=0; i<n*n; i++) cout << a[i] << " ";
        // int m=1;
        // for (int i=1; i<n*n; i++)
        // {
        //     if (a[i]>a[i-1]) m++;
        //     if (m==k) 
        //     {
        //         cout << a[i] << endl;
        //         break;
        //     }
        // }
        cout << a[k-1] << endl;
    }
}
