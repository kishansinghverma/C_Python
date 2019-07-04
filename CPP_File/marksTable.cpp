#include <stdio.h>
#define size 4
int main()
{
	int table[size][size];
	for(int i=0; i<size; i++)
	{
		printf("Enter Roll No, Physics Marks, Chemistry Marks, Math Marks Of Student %d:\n",i+1);
		for(int j=0; j<size; j++)
		{
			scanf("%d",&table[i][j]);
		}
	}
	printf("\nTabular View Of Student Marks:\n\n");
	for(int i=0; i<size; i++)
	{
		for(int j=0; j<size; j++)
		{
			printf("%d ",table[i][j]);
		}
		printf("\n");
	}
	printf("\nAverage Of Student Marks:\n\n");
	for(int i=0; i<size; i++)
	{
		float sum=0;
		for(int j=1; j<size; j++)
		{
			sum += table[i][j];
		}
		printf("Average of Student %d: %f \n",(i+1),(sum/(size-1)));
		sum=0;
	}
	printf("\nAverage Of Subject Marks:\n\n");
	for(int i=1; i<size; i++)
	{
		float sum=0;
		for(int j=0; j<size; j++)
		{
			sum += table[j][i];
		}
		printf("Average of Subject %d: %f \n",(i),(sum/(size)));
		sum=0;
	}
	
	return 0;
}
