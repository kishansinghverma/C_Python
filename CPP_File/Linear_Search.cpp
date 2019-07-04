#include<stdio.h>

int search(int array[], int size, int term)
{
	int i;
	for(i=0; i<size; i++)
	{
		if(array[i] == term)
		{
			printf("\nItem Found On %d Position...", i+1);
			break;
		}
	}
	if(i == size)
	{
		printf("\nItem Does Not Exist In Array!!");
	}	return 0;
}
int main()
{
	int array[100],size,term;
	printf("Enter the size of array: ");
	scanf("%d", &size);
	printf("\nEnter the Elements of array:\n");
	for(int i=0; i<size; i++)
	{
		scanf("%d", &array[i]);
	}
	printf("\nEnter the item to be searched: ");
	scanf("%d", &term);
	search(array, size, term);
	return 0;
}
