#include<stdio.h>

int sum=0;
int main()
{
	int array[4][4]={1,2,3,4,5,6,7,8,9,8,7,6,5,4,3,2};
	//Array Display
	printf("Given array: \n");
	for(int i=0; i<4; i++)
	{
		for(int j=0; j<4; j++)
		{
			printf("%d ",array[i][j]);
		}
		printf("\n");
	}
	
	//Summing diagonal elements...
	for(int i=0; i<4; i++)
	{
		for(int j=0; j<4; j++)
		{
			if(i==j)
			{
				sum += array[i][j];
			}
		}
	}
	printf("\nSum of diagonal elements: %d\n\n",sum);
	
	//Printing left upper triangular half
	printf("Left Upper Triangular Half of Array: \n");
	for(int i=0; i<4; i++)
	{
		for(int j=0; j<4-i; j++)
		{
			printf("%d ",array[i][j]);
		}
		printf("\n");
	}
	
	//Printing left lower triangular half
	printf("\nLeft Lower Triangular Half of Array: \n");
	for(int i=0; i<4; i++)
	{
		for(int j=0; j<=i; j++)
		{
			printf("%d ",array[i][j]);
		}
		printf("\n");
	}
	
	//Printing right upper triangular half
	printf("\nRight Upper Triangular Half of Array: \n");
	for(int i=0; i<4; i++)
	{
		for(int j=0; j<i; j++)
		{
			printf("  ");
		}
		for(int j=i; j<4; j++)
		{
			printf("%d ",array[i][j]);
		}
		printf("\n");
	}
	
	//Printing right Lower triangular half
	printf("\nRight Lower Triangular Half of Array: \n");
	for(int i=0; i<4; i++)
	{
		for(int j=0; j<3-i; j++)
		{
			printf("  ");
		}
		for(int j=3-i; j<4; j++)
		{
			printf("%d ",array[i][j]);
		}
		printf("\n");
	}
}

