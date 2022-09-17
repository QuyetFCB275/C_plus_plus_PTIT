#include <iostream>

using namespace std;

void quicksort(long a[], int left, int right)
{
	int l=left, r=right;
	long pivot = a[(l+r)/2];
	while (l<=r)
	{
		while (a[l]<pivot && l<right) l++;
		while (a[r]>pivot && r>left) r--;
		if (l<=r) 
		{
			long tmp=a[l];
			    a[l]=a[r];
			    a[r]=tmp;
			l++;
			r--;
		}
	}
	if (left < r) quicksort(a, left, r);
	if (l < right) quicksort(a, l, right);
}

int main ()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		long a[n+5];
		for (int i=0; i<n; i++) cin >> a[i];
		quicksort(a, 0, n-1);
		long brand=100000;
		for (int i=1; i<n; i++)
		{
			if (brand > (a[i]-a[i-1])) brand=a[i]-a[i-1];
		}
		cout << brand << endl;
	}
}
