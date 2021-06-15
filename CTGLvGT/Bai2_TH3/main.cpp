#include <iostream>

using namespace std;

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
    int arr[] = {04, 14, 24, 34, 54, 64, 74, 84, 94};
    int n = sizeof(arr)/ sizeof(int);
    int key = 34;
    int key1 = 60;
    int index = binarySearch(arr, 0, n -1, key);

    if (index != -1){
        cout << "Ton tai gia tri " << key << endl;
    }
    else{
        cout << "Khong ton tai gia tri: " << key << endl;
    }
    return 0;
}
