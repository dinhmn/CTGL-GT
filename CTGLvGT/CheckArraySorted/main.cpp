#include <iostream>

using namespace std;

#define N 11

bool isSorted(int arr[], int pos)
{
	if (pos == N - 1)
		return true;
	else
	{
		if (arr[pos] > arr[pos + 1]) {
			return false;
		}
		else
		{
			return isSorted(arr, pos + 1);
		}
	}
}

int main()
{
	int arr[] = { 0, 1, 2, 3, 3, 4, 5, 6, 7, 8, 9 };
	bool result = isSorted(arr, 0);
	cout << result << endl;

	return 0;
}
