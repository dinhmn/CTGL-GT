#include<iostream>

using namespace std;

void Search (int a[], int n,int k)
{
	int dem = 0;
	for(int i = 0;i<n;i++)
	{
		if(a[i] == k)
		{
			dem++;
		}
	}
	if(dem == 0)
	{
		cout<<"Trong day so khong co phan tu "<<k<<endl;
	}
	else
	{
		cout<<"Trong day co "<<dem<<" phan tu "<<k<<endl;
	}
}
int main()
{
	int a[9] =  {34, 14, 24, 54, 84, 64, 94, 74, 04};
	int k;
	cout<<"nhap so can tim kiem :";
	cin >> k;
	Search(a,9,k);	
}
