#include <iostream>

using namespace std;

void Input(int arr[], int n)
{
    for (int i =0; i < n; i++)
    {
        cout << "Input number: " << "a[" << i+1 << "]= ";
        cin >> arr[i];
    }
}

void output(int arr[], int n)
{
    cout << "Output number: " << endl;
    for (int i=0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int SequentialSearch(int arr[], int n, int key)
{
    int m;
    for (int i =0; i < n; i++)
    {
        if (arr[i] == key)
        {
            i = m;
            //cout << "Ton tai gia tri 'key' trong day " << endl;
            return m;
        }
        else return 0;
    }
}

int main()
{
    //int arr[] = { 2, 1, 4 6, 21, 78, 56, 25, 90, 10, 9 };
    //int length = sizeof(arr) / sizeof(int);
    int n; cin >> n;
    int arr[100];
    Input(arr, n);
    output(arr, n);
    int key;
    cout << "Nhap gia tri key: ";
    cin >> key;
    int tam = SequentialSearch(arr, n, key);
    if (tam == 0)
    {
        cout << "Khong ton tai gia tri trong day " << endl;

    }
    else {
        cout << "Ton tai gia tri 'key' co trong day " <<endl;
        cout << "Vi tri cua key la: " << SequentialSearch(arr, n, key);
    }

    return 0;
}
