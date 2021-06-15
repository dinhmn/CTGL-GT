#include <iostream>

using namespace std;

void Swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void output(int arr[], int n)
{
    for (int i=0; i < n ; i++)
    {
        cout << arr[i] << " ";

    }
    cout << endl;
}

void BubbleSort(int arr[], int n)
{
    for (int i =0; i < n-1; i++)
    {
        for (int j = n-1; j > i; j--)
        {
            if (arr[j] > arr[j+1])

                Swap(&arr[j], &arr[j+1]);
        }
    }
}

void SelectionSort(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int m =i;

        for (int j = i+1; j < n; j++)
        {
            if (arr[j] < arr[m])
                m=j;

        }
        if (m != i)
        {
           Swap(&arr[m], &arr[i]);
        }
    }
    /*

    */
}

void insertionSort(int arr[], int n)
{
    int tam;
    for (int i = 1; i < n; i++)
    {
        tam = arr[i];
        int j = i -1 ;
        while(j >=0 && tam < arr[j])
        {
            arr[j+1] = arr[j];
            j = j - 1;
        }
        arr[j+1] = tam;
    }
}

int main()
{
    int arr[] = {34, 14, 24, 54, 84, 64, 94, 74, 04};
    int length = sizeof(arr) / sizeof(int);
    BubbleSort(arr, length);
    //insertionSort(arr, length);
    //SelectionSort(arr, length);
    output(arr, length);
    return 0;
}
