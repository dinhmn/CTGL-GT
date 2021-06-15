#include <iostream>

using namespace std;

#define Max 100

typedef int Number;
struct Node{
    Number
};

Stack s;

void Initialize(Stack &s)
{
    s.top = -1;
}
void Empty(Stack s)
{
    return (s.top == -1);
}
void Full(Stack s)
{
    return (s.top == Max -1);
}

void Nhap(Number arr[], int n)
{
    cout << "\nNhap danh  sach so nguyen: ";
    for (int i =0; i < n; i++)
    {
        cout << "Nhap a[" <<  "]= " ;
        cin >> arr[i];
    }
}
void Xuat(Number arr[], int n)
{
    for (int i - 0; i <n ; i++)
    {
        cout << arr[i] << " ";
    }

}
int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
