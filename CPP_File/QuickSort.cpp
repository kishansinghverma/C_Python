#include<stdio.h> 

void swap(int* a, int* b, int arr[], int p, int q) 
{ 
	printf("Before Swap: ");
		for(int i=p; i<=q; i++)
			printf("%d ",arr[i]);
		printf("\n");
		
	int t = *a; 
	*a = *b; 
	*b = t; 
	
	printf("After Swap: ");
		for(int i=p; i<=q; i++)
			printf("%d ",arr[i]);
		printf("\n");
} 

int partition (int arr[], int low, int high) 
{ 
	int pivot = arr[high];
	int i = (low - 1);

	for (int j = low; j <= high- 1; j++) 
	{ 
		if (arr[j] <= pivot) 
		{ 
			i++;
			swap(&arr[i], &arr[j], arr, low, high); 
		} 
	}
	swap(&arr[i + 1], &arr[high], arr, low, high); 
	return (i + 1); 
} 

void quickSort(int arr[], int low, int high) 
{ 
	if (low < high) 
	{ 
	
	
		printf("\nArray: ");
		for(int i=low; i<=high; i++)
			printf("%d ",arr[i]);
		printf("\n");
	
		int part = partition(arr, low, high); 
	
		printf("\nFirst Half: ");
		for(int i=low; i<part; i++)
			printf("%d ",arr[i]);
		
		printf("\nPivot: %d",arr[part]);
		
		printf("\nSecond Half: ");
		for(int i=part+1; i<=high; i++)
			printf("%d ",arr[i]);

		quickSort(arr, low, part - 1); 
		quickSort(arr, part + 1, high); 
	} 
} 

int main() 
{ 
	int arr[] = {10, 7, 8, 9, 1, 5}; 
	int n = sizeof(arr)/sizeof(arr[0]); 
	quickSort(arr, 0, n-1); 
	printf("\nSorted array: "); 
	for(int i=0; i<n; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0; 
} 

