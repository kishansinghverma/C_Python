#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int *sort(int a[], int n, int k)
{
	int count[k+1]={0};
	int *sorted=(int*)malloc(sizeof(int)*n);
	
	for(int i=0; i<n; i++)
		count[a[i]]++;
	
	for(int i=1; i<=k+1; i++)
		count[i] += count[i-1];
	
	for(int i=n-1; i>=0; i--)
	{
		sorted[count[a[i]]-1]=a[i];
		count[a[i]]--;
	}
	return sorted;
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


