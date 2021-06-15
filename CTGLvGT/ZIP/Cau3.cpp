#include<iostream>
#include<iomanip>
#include<stdio.h>
#include<string.h>
using namespace std;
// h? và tên, gi?i
//tính, nam sinh, di?m t?ng k?t.
struct Student
{
	char HoTen[30];
	int gt;
	int NamS;
	float DTK;
};
void input(Student st[], int n)
{
    for(int i=0; i < n; i++)
    {
        cout << "Ho va ten hoc sinh : ";
        fflush(stdin);
        gets(st[i].HoTen);
        cout << "Gioi tinh (1:Nam/2:Nu) :";
        cin >> st[i].gt;
        cout << "Nam Sinh : ";
        cin >> st[i].NamS;
        cout << "Diem tong ket hoc sinh ";
        cin >> st[i].DTK;
    }
}
void output(Student st[], int n)
{
    for (int i =0; i < n; i++)
    {
        cout <<st[i].HoTen<<setw(15);
        if(st[i].gt == 1)
        {
        	cout<<"Nam"<<setw(10);
		}
		else
		{
			cout<<"Nu"<<setw(10);
		}
		cout<<st[i].NamS<<setw(10)<<st[i].DTK<<endl;
    }
}
void Swap(Student *a, Student *b)
{
    Student temp = *a;
    *a = *b;
    *b = temp;
}
void Bablesort ( Student st[], int n)
{
	Student tg;
	for(int i=0;i<n-1;i++)
	{
		for(int j = 0;j< n-1 ; j++)
		{
			if(st[j].DTK < st[j+1].DTK)
			{
				Swap(&st[j], &st[j+1]);
			}
		}
	}
	cout<<endl;
}
void Search_Name_Mark ( Student st[], int n)
{
	char x[20];
	int d;
	int dem = 0;
	cout<<"Nhap ten can tim kiem :";     fflush(stdin);   gets(x);
	cout<<"nhap diem can tim kiem :";    cin>>d;
	for(int i=0;i<n;i++)
	{
		if(strcmp(st[i].HoTen,x)== 0 && st[i].DTK == d)
		{
			dem++;
		}
	}
	if(dem == 0)
	{
		cout<<"Trong danh sach khong co sinh vien co ten la "<<x<<" va co diem tk ="<<d<<endl;
	}
	else
	{
		cout<<"Trong danh sach co "<<dem<<" sinh vien co ten la "<<x<<" va co diem tk ="<<d<<endl;
	}
}
int binarySearch_Mark (Student st[], int l,int n)
{
	int m,k;
	cout<<"Nhap diem TK can tim kiem :";    cin>>k;
	if(n < l)
	{
		return -1;
	}
	else
	{
		m = (n-1+l)/2;
		if(st[m].DTK == k)
		{
			return k;
		}
		else if ( st[m].DTK  > k)
		{
			return binarySearch_Mark(st,0,m);
		}
		else
			return binarySearch_Mark(st,m+1,n);
	}
}
int main()
{
	Student st[100];
    int n;
    do{
        cout << "Input n: ";
        cin >> n;
    }while(n <=0 || n >= 100);
    cout<<"------NHAP THONG TIN HOC SINH------------"<<endl;
    input(st, n);
    Bablesort(st,n);
    cout << "---------DANH SACH HOC SINH ---------" << endl;
    output(st, n);
    Search_Name_Mark(st,n);
	cout<<binarySearch_Mark(st,0,n-1); 
}
