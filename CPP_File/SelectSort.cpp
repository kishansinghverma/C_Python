#include <stdio.h>
#include <stdlib.h>

int *selection_sort(int *p, int n)
{
	int temp, count=0;
	for(int i=0; i<n-1; i++)
	{
		int loc=i, small=*(p+i);
		for(int j=i+1; j<n; j++)
		{
			if(small>*(p+j))
			{
				small=*(p+j);
				loc=j;
			}
			count++;
		}
		temp=*(p+i);
		*(p+i)=*(p+loc);
		*(p+loc)=temp;
	}
	printf("\n\nArray Sorted In %d Iterations:\n",count);
	return p;
}
int display(int *p, int n,int type)
{
	if(type == 0)
	{
		printf("\n--------------------------------\n");
		printf("Given Array:\n");
	}
	
	for(int i=0; i<n; i++)
	{
		printf("%d ", *(p+i));
	}
}

int main()
{	
	int n, algo;
	int *selection;
	
	printf("Enter No. Of Elements: ");
	scanf("%d", &n);
	printf("Enter Elements:\n");
	int *ptr=(int*)malloc(n*sizeof(int));
	for(int i=0; i<n; i++)
	{
		scanf("%d", ptr+i);
	}
	
	display(ptr, n, 0);
	selection=selection_sort(ptr, n);
	display(selection, n,1);
	
	
	return 0;
}
