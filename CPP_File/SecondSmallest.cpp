#include <limits.h>
#include <stdio.h>

int main()
{
	int arr[]={1,3,2,5,6,1};
	int n=sizeof(arr)/sizeof(arr[0]);
	int min1,min2;
	min1=min2=INT_MAX;
	
	for(int i=0; i<n; i++)
	{
		if(arr[i]<min1)
		{
			min2=min1;
			min1=arr[i];
		}
		else if(arr[i]>min1 && arr[i]<min2)
			min2=arr[i];
	}
	printf("%d %d",min1, min2);
}

