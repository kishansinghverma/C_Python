#include <stdio.h>

float *greedyKnapSack(float items[][4], int n, float c)
{	
	for(int i=0; i<n; i++)
		items[i][2]=items[i][0]/items[i][1];
	
	for(int i=0; i<n; i++)
	{
		float max=items[i][2];
		int loc=i;
		
		for(int j=i; j<n; j++)
		{
			if(max<items[j][2])
			{
				max=items[j][2];
				loc=j;
			}
		}
		
		float tp=items[i][0];
		items[i][0]=items[loc][0];
		items[loc][0]=tp;	
		
		float tw=items[i][1];
		items[i][1]=items[loc][1];
		items[loc][1]=tw;
		
		float pw=items[i][2];
		items[i][2]=items[loc][2];
		items[loc][2]=pw;
	}
	
	for(int i=0; i<n; i++)
	{
		if(c>=items[i][1])
		{
			c=c-items[i][1];
			items[i][3]=1.0;
		}
		else
		{
			items[i][3]=c/items[i][1];
			break;
		}
	}
	
	return (float*)items;
}

int main()
{
	float items[][4]={{280,40},{100,10},{120,20},{120,24},{180,5},{90,1}};
	int n=sizeof(items)/sizeof(items[0]);
	float c=60;
	
	printf("Profit  |  Weight\n");
	printf("--------|--------\n");
	for(int i=0; i<n; i++)
		printf("%6.0f  | %7.0f\n", items[i][0], items[i][1]);
	
	float *arr=greedyKnapSack(items, n, c);
	
	printf("\n\nAfter Applying Algorithm:\n\n");
	printf("Profit  |  Weight  |  P/W  |  Selected\n");
	printf("--------|----------|-------|----------\n");
	for(int i=0; i<n; i++)
		printf("%6.0f  | %7.0f  |  %3.0f  |  %8.2f\n", *(arr+(i*4)+0), *(arr+(i*4)+1), *(arr+(i*4)+2), *(arr+(i*4)+3));
	
	float total=0;
	
	printf("\nSelected Weights: ");
	for(int i=0; i<n; i++)
	{
		printf("%.0f ", *(arr+(i*4)+1) * *(arr+(i*4)+3));
		total += *(arr+(i*4)+1) * *(arr+(i*4)+3);
	}
		
	printf("\nTotal: %.0f", total);
	
}
