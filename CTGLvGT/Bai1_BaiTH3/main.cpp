#include <iostream>

using namespace std;

int Search(int arr[], int n, int k)
{
    //cout << "Enter the values to look for:  ";
    //cin >> k;
    for (int i=0; i < n; i++)
    {
        if (arr[i] == k)
        {
            cout << "There is a value to look for " << endl;
            break;
        }
        else cout << "Nothings" << endl;
    }
}

int main()
{
    int arr[] = {34, 14, 24, 54, 84, 64, 94, 74, 04};
    int n = sizeof(arr)/ sizeof(int);
    int k1 = 94;
    int k2= 55;
    Search(arr, n, k1);
    Search(arr, n, k2);
    return 0;
}
