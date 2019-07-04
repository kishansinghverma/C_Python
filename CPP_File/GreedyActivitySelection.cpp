#include <stdio.h>
#include <stdlib.h>
#include <string.h>

bool isSorted(int list[][3], int n)
{
	for(int i=0; i<n-1; i++)
		if(list[i][2]>list[i+1][2])
			return false;
			
	return true;
}

int *greedyActivitySelection(int list[][3], int n)
{
	if(!isSorted(list, n))
		for(int i=0; i<n; i++)
		{
			int min=list[i][2];
			int loc=i;
			
			for(int j=i; j<n; j++)
				if(min>list[j][2])
				{
					min=list[j][2];
					loc=j;
				}
			
			int temp=list[i][0];
			list[i][0]=list[loc][0];
			list[loc][0]=temp;
			
			temp=list[i][1];
			list[i][1]=list[loc][1];
			list[loc][1]=temp;
			
			temp=list[i][2];
			list[i][2]=list[loc][2];
			list[loc][2]=temp;	
		}
	
	printf("\n\nSorted Activities Are:\n");
	
	for(int i=0; i<n; i++)
		printf("%d -> (%d - %d)\n",list[i][0], list[i][1], list[i][2]);	
	
	int *selected=(int*)malloc(sizeof(int)*n);
	
	memset(selected, 0, n*sizeof(selected[0]));
	
	selected[0]=list[0][0];
	int m=0;
	
	for(int i=1; i<n; i++)
	{
		if(list[i][1]>=list[m][2])
		{
			selected[i]=list[i][0];
			m=i;
		}
	}
	return selected;
}

int main()
{
	int list[][3]={{1,1,6},{2,3,4},{3,0,2},{4,5,7},{5,8,9},{6,5,9}};
	int n=sizeof(list)/sizeof(list[0]);
	
	printf("Given Activities Are:\n");
	
	for(int i=0; i<n; i++)
		printf("%d -> (%d - %d)\n",list[i][0], list[i][1], list[i][2]);
	
	int *selected=greedyActivitySelection(list, n);
	
	printf("\nSelected Activities Are: ");
	for(int i=0; i<n; i++)
	{
		if(selected[i]!=0)
			printf("%d ", selected[i]);
	}
}
