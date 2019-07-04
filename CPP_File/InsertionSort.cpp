#include <stdio.h>
#include <stdlib.h>

int *insertion_sort(int *p, int n)
{
	int count;
	for(int i=1; i<n; i++)
	{
		int temp=*(p+i);
		int j=i-1;
		while(j>=0 && temp<*(p+j))
		{
			*(p+(j+1))=*(p+j);
			j--;
			count++;
		}
		*(p+(j+1))=temp;
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
	int n;
	int *insertion;
	
	printf("Enter No. Of Elements: ");
	scanf("%d", &n);
	printf("Enter Elements:\n");
	int *ptr=(int*)malloc(n*sizeof(int));
	for(int i=0; i<n; i++)
	{
		scanf("%d", ptr+i);
	}
	
			display(ptr, n, 0);
			insertion=insertion_sort(ptr, n);
			display(insertion, n, 1);
	
	return 0;
}
