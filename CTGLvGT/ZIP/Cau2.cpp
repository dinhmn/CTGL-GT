#include<iostream>

using namespace std;

void SX(int a[], int n)
{
	int tg;
	for(int i=0;i<n-1;i++)
	{
		for(int j = i+1;j<n;j++)
		{
			if(a[i] > a[j])
			{
				tg = a[i];
				a[i] = a[j];
				a[j] = tg;
			}
		}
	}
}
int binarySearch (int x[], int l,int n,int k)
{
	int m;
	if(n < l)
	{
		return -1;
	}
	else
	{
		m = (n-1+l)/2;
		if(x[m] == k)
		{
			return k;
		}
		else if ( x[m]  > k)
		{
			return binarySearch(x,0,m,k);
		}
		else
			return binarySearch(x,m+1,n,k);
	}
}
int main()
{
	int a[9] = {04, 14, 24, 34, 54, 64, 74, 84, 94};
	SX(a,9);
	int k;
	cout<<"nhap so can tim kiem :";
	cin >> k;
	cout<<binarySearch(a,0,8,k);
}
