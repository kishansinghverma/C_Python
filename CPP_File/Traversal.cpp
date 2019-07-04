#include<stdio.h>

int traversal(int array[], int size)
{
	printf("\nGiven Array:\n");
	for(int i=0; i<size; i++)
	{
		printf("%d\n",array[i]);
	}
	return 0;
}
int main()
{
	int array[100],size;
	printf("Enter the size of array: ");
	scanf("%d", &size);
	printf("Enter the Elements of array:\n");
	for(int i=0; i<size; i++)
	{
		scanf("%d", &array[i]);
	}
	traversal(array, size);
	return 0;
}
