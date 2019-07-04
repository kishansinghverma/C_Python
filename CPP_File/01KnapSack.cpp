#include <stdio.h>
#include <string.h>

int getMax(int x, int y) 
{
  if(x > y) 
	return x;
  else 
    return y;
}
void KnapSack(int data[6][15])
{
	for(int i=0; i<6; i++)
	{
		for(int j=0; j<15; j++)
		{
			printf("%02d ", data[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	
	for(int i = 1; i < 6; i++) 
	{
    	for(int j= 3; j < 15; j++) 
		{
      		if(data[i][1] <= j) {
        		data[i][j] = getMax(data[i-1][j], data[i][0] + data[i-1][j - data[i][1]]);
      	} 
		else 
		{
        	data[i][j] = data[i-1][j];
      	}
    }
  }
	
	for(int i=0; i<6; i++)
	{
		for(int j=0; j<15; j++)
		{
			printf("%02d ", data[i][j]);
		}
		printf("\n");
	}
	
}

int main()
{
	int matrix[6][15]={0};

	int data[][2]={{10,2},{12,3},{5,5},{8,7},{15,8}};
	
	for(int i=0; i<5; i++)
	{
		for(int j=0; j<2; j++)
		{
			matrix[i+1][j]=data[i][j];
		}
	}
	
	KnapSack(matrix);
}
