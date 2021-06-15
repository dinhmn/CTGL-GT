#include <iostream>

using namespace std;

void Swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void SelectionSort(int arr[], int n)
{
    for (int i =0; i < n; i++)
    {
        int m =i;
        for (int j = i+1; j < n; j++)
        {
            if (arr[j] < arr[m])
                m =j;
        }
        if (m != i)
        {
            Swap(&arr[m], &arr[i]);
        }
    }
}


void output(int arr[], int n)
{
    for (int i =0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}


int main()
{
    int arr[] = {2, 3, 1, 5, 2, 6, 8, 9, 5, 7, 3, 7, 12, 65, 34, 21};
    int length = sizeof(arr) / sizeof(int);
    SelectionSort(arr, length);
    output(arr, length);
    return 0;
}
