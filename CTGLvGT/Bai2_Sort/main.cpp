#include <iostream>

using namespace std;

void Swap(string *a, string *b)
{
    string temp = *a;
    *a = *b;
    *b = temp;
}

void output(string arr[], int n)
{
    for (int i =0; i < n ; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void BubbleSort(string arr[], int n)
{
    for (int i = 0; i < n-1 ; i++)
    {
        for (int j = n-1; j >i; j--)
        {
            if (arr[j] > arr[j-1])
            {
                Swap(&arr[j],&arr[j-1]);
            }
        }
    }
}


int main()
{
    string arr[] = { "John", "Wenger", "Anna", "Henry", "Thor", "Terry", "Ozil", "Adam", "Dennis" };
    int length = sizeof(arr)/sizeof(string);
    BubbleSort(arr, length);
    output(arr, length);

    return 0;
}
