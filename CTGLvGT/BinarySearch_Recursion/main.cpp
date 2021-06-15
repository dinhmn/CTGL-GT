#include <iostream>

using namespace std;

void output(int arr[], int n)
{
    for (int i =0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int binarySearch(int arr[], int l, int r, int key)
{
    int m;
    if (l <= r)
    {
        m = (l + r) /2;
        if (arr[m] == key)
        {
            return m;
        }
        else
        {
            if (arr[m] > key)
            {
                return binarySearch(arr, l, m-1, key);
            }
            else return binarySearch(arr, m+1, r, key);
        }
    }
    else return -1;

    /*
    int (l <= r){
        int m = l + (
    }
    */
}

int main()
{
    int arr[] = {1, 2, 5, 6, 8};
    int length = sizeof(arr) / sizeof(int);
    int key;
    output(arr, length);
    cout << "Nhap key can tim: " << endl;
    cin >> key;
    int index = binarySearch(arr, 0, length -1, key);

    if (index != -1){
        cout << "Ton tai gia tri " << key << endl;
    }
    else{
        cout << "Khong ton tai gia tri: " << key << endl;
    }
    return 0;
}
