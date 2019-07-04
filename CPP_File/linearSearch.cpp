#include<stdio.h>

void search(int arr[], int ele, int n)
{
	int i;
	for(i=0; i<n; i++)
	{
		if(ele==arr[i])
		{
			printf("Element Found At %d Position", i+1);
			break;
		}
	}
	if(i==n)
	{
		printf("Element Not found!");
	}
}
int main()
{
	int arr[10], ele;
	int n=sizeof(arr)/sizeof(arr[0]); 
	printf("Input Array Elements:\n");
	for(int i=0; i<n; i++)
	{
		scanf("%d", &arr[i]);
	}
	printf("Specify Element To Search: ");
	scanf("%d", &ele);
	search(arr, ele,n);
	return 0;
}
