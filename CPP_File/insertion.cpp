#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	int x,n,size,array[100]={0};
	
	printf("Enter size of array: ");
	scanf("%d", &size);
	printf("\nEnter elements of array:\n");
	for(int i=0; i<size; i++)
	{
		scanf("%d", &array[i]);
	}
	printf("\n\nGiven Array:\n");
	for(int i=0; i<size; i++)
	{
		printf("%d ",array[i]);
	}
	printf("\n\nEnter element to insert in array: ");
	scanf("%d",&x);
	printf("\nDefine position of new element: ");
	scanf("%d",&n);
	for(int i=size+1; i>=n; i--)
	{
		array[i]=array[i-1];
	}
	array[n-1]=x;
	printf("\nArray after element insertion:\n");
	for(int i=0; i<size+1; i++)
	{
		printf("%d ",array[i]);
	}
	return 0;
}

