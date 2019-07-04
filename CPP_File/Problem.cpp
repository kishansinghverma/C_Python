#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

void driver(int arr[], int n);

int p, q, cnt=0;
int **matrix;

void display()
{
	for(int i=0; i<p; i++)
	{
		for(int j=0; j<q; j++)
			printf("%-05d", matrix[j][i]);
		printf("\n");
	}
}
void perform(int arr[], int n)
{	
	for(int j=0; j<n; j++)
		matrix[cnt][j]=arr[j];

	cnt++;
	if(n>1)
		driver(arr,n/2);
	else
		display();
}

void driver(int arr[], int n)
{
		int array[n];
		for(int i=0; i<n; i++)
			array[n-1-i]=arr[(n*2)-1-i]-arr[i];
			
		perform(array, n);
}

void sort(int *arr, int n)
{
	for(int i=0; i<n; i++)
	{
		int min=arr[i];
		for(int j=i; j<n; j++)
		{
			if(min>arr[j])
			{
				min=arr[j];
				int temp=arr[i];
				arr[i]=min;
				arr[j]=temp;
			}
		}
	}
	perform(arr, n);
}

int main()
{
	int arr[4][4]={{5,4,3,10},{1,13,2,11},{9,8,7,12},{14,16,15,6}};
	p=sizeof(arr)/sizeof(arr[0][0]);
	q=log2(p)+1;
	
	matrix=(int**)malloc(sizeof(int*)*q);
	
	for(int i=0; i<q; i++)
	{
		matrix[i] = (int*)malloc(p*sizeof(int));
		memset(matrix[i], 0, p*sizeof(matrix[0][0])); 
	}
        
         
	sort(&arr[0][0], p);
}
