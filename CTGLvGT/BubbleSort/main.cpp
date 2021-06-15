#include <iostream>

using namespace std;

void Swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void BubbleSortMin(int arr[], int n)
// noi phan tu nho nhat len
{
    for (int i = 0; i < n-1; i++)
    {
        for (int j = n -1; j > i; j--)
        {
            if (arr[j] < arr[j-1])
            {
                Swap(&arr[j], &arr[j-1]);
            }
        }
    }
}

void BubbleSortMax(int arr[], int n)
// noi phan tu lon nhat len
{
    for (int i =0; i < n-1; i++)
    {
        for (int j = 0; j < n -1 - i; j++)
        {
            if (arr[j] > arr[j+1])
            {
                Swap(&arr[j], &arr[j+1]);
            }
        }
    }
}

void OutArray(int arr[], int n)
{
    for (int i =0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[] = { 2, 3, 1, 5, 5, 6, 8,2 ,1, 0, 4, 5, 7, 2, 4};
    int length = sizeof(arr)/sizeof(int);
    BubbleSortMin(arr, length);
    OutArray(arr, length);

    return 0;
}
