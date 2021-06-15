#include <iostream>
#include <conio.h>
#include <stdio.h>

int arr[10][6];
using namespace std;

void swap(int *a, int *b)
{
	int *temp = a;
	a = b;
	b = temp;
}
void arrangeArrival(int arr[][6], int n)
{
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n-i-1; j++)
        {
            if(arr[j][1] > arr[j+1][1])
            {
                for(int k=0; k<5; k++)
                {
                    swap(arr[j][k], arr[j+1][k]);
                }
            }
        }
    }
}

void completionTime(int arr[][6], int n)
{
    /*
    process 	AT BT ST CT TAT WT RT
    start_time = current_time
    completion_time = start_time + burst_time
    turnaround_time = completion_time(CT) - arrival_time
    waiting_time = turnaround_time - burst_time
    response_time = start_time - arrival_time
    */
    int tam, val;
    arr[0][3] = arr[0][1]/*AT*/ + arr[0][2] /*BT*/;
    arr[0][5] = arr[0][3] - arr[0][1];
    arr[0][4] = arr[0][5] - arr[0][2];

    for(int i=1; i<n; i++)
    {
        tam = arr[i-1][3];
        int low = arr[i][2];
        for(int j=i; j<n; j++)
        {
            if(tam >= arr[j][1] && low >= arr[j][2])
            {
                low = arr[j][2];
                val = j;
            }
        }
        arr[val][3] = tam + arr[val][2];
        arr[val][5] = arr[val][3] - arr[val][1];
        arr[val][4] = arr[val][5] - arr[val][2];
        for(int k=0; k<6; k++)
        {
            swap(arr[val][k], arr[i][k]);
        }
    }
}
float AverageWT(int arr[][6], int n)
{
    float tong = 0;
    for (int i = 0; i < n; i++)
    {
        tong += arr[i][4];

    }
    return tong/n;
}
float AveragePT(int arr[][6], int n)
{
    float sum = 0;
    for (int i =0; i < n; i++)
    {
        sum += arr[i][2];
    }
    return sum/n;
}
int main()
{
    int n;
	cout << "Enter the number of process " << endl;
	cin >> n;
	cout << "Enter the process number" << endl;
	for(int i=0; i<n; i++)
    {
        cout << "-->Process " << i + 1 << "\n";
        cout << "Enter P";
        cin >> arr[i][0];
        cout << "Enter Arrival Time: ";
        cin >> arr[i][1];
        cout << "Enter Burst Time: ";
        cin >> arr[i][2];
        cout << "-------------" << endl;
    }
    cout << "\n--------------------------------------------------------------------\n";
    cout<< "Befor Arrange\n";
    cout<< "Process ID\tArrival Time\tBurst Time\n";
    for(int i=0; i<n; i++)
    {
        cout<< arr[i][0] << "\t\t" << arr[i][1] << "\t\t" << arr[i][2] << "\n";
    }

    arrangeArrival(arr, n);
    completionTime(arr, n);
    cout << "\n--------------------------------------------------------------------\n";
    cout << "After Arrange\n";
	cout << "Process ID\tArrival Time\tBurst Time\tCompletion Time\tWaiting Time\t\n";
	for (int i = 0; i < n; ++i)
	{
		cout << arr[i][0] << "\t\t" << arr[i][1] << "\t\t" << arr[i][2] << "\t\t" << arr[i][3] << "\t\t" << arr[i][4] << "\t\t" << endl;
		/* code */
	}
    cout << "\n--------------------------------------------------------------------\n";
    cout << "Result: " << endl;
    cout << "\nAverage Waiting Time: " << AverageWT(arr, n);
    cout << "\nAverage Process Time: " << AveragePT(arr, n);

    cout << "\n--------------------------------------------------------------------\n";
	return 0;
}
