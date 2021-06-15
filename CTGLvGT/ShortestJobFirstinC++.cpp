#include <iostream>
#include <conio.h>
int mat[10][6];
using namespace std;

void swap(int *a, int *b)
{
	int *temp = a;
	a = b;
	b = temp; 
}

int main()
{
	//	int i, j, n, temp, p[max], bt[max], wt[max], tat[max];
	//float awt = 0, atat = 0;
	clrscr();

	cout << "Enter the number of process" << endl;
	cin >> n;
	cout << "Enter the process number" << endl;
	for(int i=0; i<num; i++) 
    { 
        cout<<"-->Process "<<i+1<<"\n"; 
        cout<<"Enter Process Id: "; 
        cin>>mat[i][0]; 
        cout<<"Enter Arrival Time: "; 
        cin>>mat[i][1]; 
        cout<<"Enter Burst Time: "; 
        cin>>mat[i][2]; 
    } 

	// applying bubble sort technique to sort accoding to their burst time
	for (int i = 0; i < n; ++i)
	{
		/* code */
		for (int j = 0; j < n-i-1; ++j)
		{
			/* code */
			if (mat[j][1] > mat[j+1][1])
			{
				for (int k = 0; i < 5; ++k)
				{
					swap(&mat[j][k], &mat[j+1][k])
					/* code */
				}
			}
		}
	}

	int temp, val;

	mat[0][3] = mat[0][2] + mat[0][1];
	mat[0][5] = mat[0][3] - mat[0][1];
	mat[0][4] = mat[0][5] - mat[0][2];

	for (int i = 1; i < n; ++i)
	{
		/* 
		process 	AT BT ST CT TAT WT RT	
		start_time = current_time
		completion_time = start_time + burst_time
		turnaround_time = completion_time(CT) - arrival_time
		waiting_time = turnaround_time - burst_time
		response_time = start_time - arrival_time



		 */
		ct = mat[i-1][3];
		int low = mat[i][2];
		for (int j = i; j < n; ++j)
		{
			if ( ct >= mat[j][1] && low >= mat[j][2]) // if completion
			{
				low = mat[j][2];
				val = j;
			}
			mat[val][3] = ct + mat[val][1];
			mat[val][5] = mat[val][3] - mat[val][1];
			mat[val][4] = mat[val][5] - mat[val][2];
			/* code */

			for (int k = 0; k < 6; ++k)
			{
				/* code */
				swap(&mat[val][k], &mat[i][k]);
			}
		}



	}

	cout << "Process \t arrival time \t burst time \t completion_time \t waiting time \t turn around time \n";
	for (int i = 0; i < n; ++i)
	{
		cout << mat[i][0] << "\t\t" << mat[i][1] << "\t\t" << mat[i][2] << "\t\t" << mat[i][3] << "\t\t" << mat[i][4] << "\t\t" << mat[i][5] << endl;
		/* code */
	}
	return 0;
}