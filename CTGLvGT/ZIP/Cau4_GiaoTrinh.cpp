#include<iostream>

using namespace std;

void NhapMang ( int a[], int *n)
{
	do
	{
		cout<<"Nhap n = ";
		cin>>*n; 
	}while(*n<=0);
	for(int i =0;i<*n;i++)
	{
		cout<<"Phan tu a["<<i<<"] = ";
		cin >> a[i];
	}
}
void XuatMang ( int a[], int n)
{
	cout<<"Mang :";
	for (int i=0;i<n;i++)
	{
		cout<<a[i]<" ";
	}
	cout<<endl;
}
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
	int m,vt;
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
		{
			return binarySearch(x,m+1,n,k);
		}	
	}
}
void vitri ( int x[], int n,int k)
{
	int vt;
	for(int i = 0;i<n;i++)
	{
		if(x[i] == k)
		{
			vt = i;
		}
	}
	cout<<"so can tim o vi tri :"<<vt <<endl;
}
void selectSort ( int a[], int n)
{
	for(int i =0 ;i<n-1;i++)
	{
		int min = a[i];
		for(int j=1;j<n;j++)
		{
			if(min > a[i]) min = a[i];
		}
		int tg;
		tg = a[i];
		a[i] = min;
		min = tg;
	}
	cout<<endl;
}
void Bablesort ( int a[], int n)
{
	int tg;
	for(int i=0;i<n-1;i++)
	{
		for(int j = 0;j< n-1 ; j++)
		{
			if(a[j] > a[j+1])
			{
				tg = a[j];
				a[j] = a[j+1];
				a[j+1] = tg;
			}
		}
	}
	cout<<endl;
}
void insertionSort ( int a[], int n)
{
	for(int i=1;i<=n-1;i++)
	{
		int tg = a[i];
		int j = i-1;
		while (j>=0 && tg < a[j])
		{
			a[j+1] = a[j];
			j = j - 1;
		}
		a[j+1] = tg;
	}
}
int main()
{
	int n,k;
	int a[15];
	NhapMang(a,&n);
	SX(a,n);
	XuatMang(a,n);
	cout<<"Nhap so can tim kiem :";
	cin>>k;
	cout<<binarySearch(a,0,n-1,k)<<endl;
	vitri(a,n,k);
	selectSort(a,n);
	XuatMang(a,n); 
	Bablesort(a,n);
	XuatMang(a,n);
	insertionSort(a,n);
	XuatMang(a,n);
}
