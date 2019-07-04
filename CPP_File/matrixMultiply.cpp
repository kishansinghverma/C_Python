#include <stdio.h>

int a[10][10], b[10][10], c[10][10]={0}, size, temp;

int main()
{
	printf("Enter Size Of Matrix: ");
	scanf("%d", &size);
	printf("\nEnter Elements Of Matrix 1:\n");
	for(int i=0; i<size; i++)
	{
		for(int j=0; j<size; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	printf("\nGiven Matrix 1:\n");
	for(int i=0; i<size; i++)
	{
		for(int j=0; j<size; j++)
		{
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
	printf("\nEnter Elements Of Matrix 2:\n");
	for(int i=0; i<size; i++)
	{
		for(int j=0; j<size; j++)
		{
			scanf("%d", &b[i][j]);
		}
	}
	printf("\nGiven Matrix 2:\n");
	for(int i=0; i<size; i++)
	{
		for(int j=0; j<size; j++)
		{
			printf("%d ", b[i][j]);
		}
		printf("\n");
	}
	printf("\nMultiplied Matrix:\n");
	for(int i=0; i<size; i++)
	{
		for(int j=0; j<size; j++)
		{
			for(int k=0; k<size; k++)
			{
				temp += a[i][k]*b[k][j];
			}
			c[i][j]=temp;
			temp=0;
		}
	}
	for(int i=0; i<size; i++)
	{
		for(int j=0; j<size; j++)
		{
			printf("%d ", c[i][j]);
		}
		printf("\n");
	}
}
