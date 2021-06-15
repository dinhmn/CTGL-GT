#include <iostream>

using namespace std;


int count(int a[],int n,int x){
	if(n-1==0){
		if(a[n-1]==x){
			return 1;
		}
		else return 0;
	}
	if(a[n-1]==x){
		return 1+count(a,n-1,x);
	}
	else return count(a,n-1,x);
}
int main()
{
    int arr[] = {3, 2, 5, 1, 3, 5, 7, 3};
    count(arr, 8, 3);
    return 0;
}
