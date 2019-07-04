#include <stdio.h>

int main()
{
	int a[10][10], b[10][10],size;
	printf("Enter the size of matrix (1-10): ");
	scanf("%d",&size);
	printf("\nEnter the elements of Matrix1:\n");
	for(int i=0; i<size; i++)
	{
		for(int j=0; j<size; j++)
		{
			scanf("%d", &a[i][j]);
		}	
	}
	printf("Enter the elements of Matrix2:\n");
	for(int i=0; i<size; i++)
	{
		for(int j=0; j<size; j++)
		{
			scanf("%d", &b[i][j]);
		}	
	}
	printf("\nGiven Matrix1:\n\n");
	for(int i=0; i<size; i++)
	{
		for(int j=0; j<size; j++)
		{
			printf("%d ", a[i][j]);
		}
		printf("\n");	
	}
	printf("\nGiven Matrix2:\n\n");
	for(int i=0; i<size; i++)
	{
		for(int j=0; j<size; j++)
		{
			printf("%d ", b[i][j]);
		}
		printf("\n");	
	}
	printf("\nSum of Matrixes:\n\n");
	for(int i=0; i<size; i++)
	{
		for(int j=0; j<size; j++)
		{
			printf("%d ", a[i][j]+b[i][j]);
		}
		printf("\n");	
	}
}
