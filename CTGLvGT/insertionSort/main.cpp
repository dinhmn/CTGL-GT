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

void insertionSort(int arr[], int n)
{
    int tam;
    for (int i=1; i < n; i++)
    {
        tam = arr[i];
        int j = i - 1;
        while(j >= 0 && tam < arr[j])
        {
            arr[j+1] = arr[j];
            j = j -1;
        }
        arr[j+1] = tam;
    }
}

int main()
{
    int arr[] = { 53, -21, 67, 15, 60, 40};
    int length = sizeof(arr) / sizeof(int);
    insertionSort(arr, length);
    output(arr, length);
    return 0;
}
