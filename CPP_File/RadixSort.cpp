#include <stdio.h>
#include <stdlib.h>

int *sort(int a[], int n, int max)
{
	int k=0, divisor=1;;
	while(max>0)
	{
		max=max/10;
		k++;
	}
	
	for(int x=0; x<k; x++)
	{
		int *sorted=(int*)malloc(sizeof(int)*n);
		int count[10]={0};
		
		for(int i=0; i<n; i++)
			count[(a[i]/divisor)%10]++;
		
		for(int i=1; i<10; i++)
			count[i] += count[i-1];
	
		for(int i=n-1; i>=0; i--)
		{
			sorted[count[(a[i]/divisor)%10]-1]=a[i];
			count[(a[i]/divisor)%10]--;
		}
		a=sorted;
		divisor *= 10;
	}
	return a;
}

int main()
{
	int n;
	printf("Enter Size of Array: ");
	scanf("%d", &n);
	int *arr=(int*)malloc(sizeof(int)*n);
	printf("Enter Elements:\n");
	
	int max=0;
	
	for(int i=0; i<n; i++)
	{
		scanf("%d", &arr[i]);
		if(max < arr[i])
			max=arr[i];
	}
	
	int *a=sort(arr, n, max);
	
	printf("Sorted Array: ");
	for(int i=0; i<n; i++)
	{
		printf("%d ",a[i]);
	}
}


