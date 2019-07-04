#include <stdio.h>

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
	printf("\n\nDefine position of element to delete: ");
	scanf("%d",&n);
	for(int i=n; i<size; i++)
	{
		array[i-1]=array[i];
	}
	array[size-1]=0;
	printf("\nArray after element deletion:\n");
	for(int i=0; i<size-1; i++)
	{
		printf("%d ",array[i]);
	}
	return 0;
}

