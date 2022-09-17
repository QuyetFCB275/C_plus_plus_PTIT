#include <bits/stdc++.h>

using namespace std;

void quicksort(int a[], int left, int right)
{
    int l=left, r=right;
    int pivot = a[(l + r) / 2];
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
    if (l < right) quicksort(a, l, right);
    if (left < r) quicksort(a, left, r);
}

int main ()
{
    int n;
    cin >> n;
    int a[1000], b[100][100];
    for (int i=0; i<n*n; i++) cin >> a[i];
    quicksort(a, 0, n*n-1);
    // for (int i=0; i<n*n; i++) cout << a[i] << " ";
    int h1=0, h2=n-1, c1=0, c2=n-1, k=0;
    while (h1 <= h2 && c1 <=c2)
    {
        if (h1 <= h2 && c1 <=c2)
        {
            for (int i=c1; i<=c2; i++) b[h1][i]=a[k++];
            h1++;
        }
        if (h1 <= h2 && c1 <=c2)
        {
            for (int i=h1; i<=h2; i++) b[i][c2]=a[k++];
            c2--;
        }
        if (h1 <= h2 && c1 <=c2)
        {
            for (int i=c2; i>=c1; i--) b[h2][i]=a[k++];
            h2--;
        }
        if (h1 <= h2 && c1 <=c2)
        {
            for (int i=h2; i>=h1; i--) b[i][c1]=a[k++];
        c1++;
        }
    }
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<n; j++)
            cout << b[i][j] << " ";
        cout << endl;
    }
}