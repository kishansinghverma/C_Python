#include<stdio.h>
#include<stdlib.h>

int *bubble_sort(int *p, int n)
{	
	int temp, count=0;
	for(int i=0; i<n-1; i++)
	{
		for(int j=0; j<n-i-1; j++)
		{
			if(*(p+j)>*(p+j+1))
			{
				temp=*(p+j+1);
				*(p+j+1)=*(p+j);
				*(p+j)=temp;
			}
			count++;
		}
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
	int *bubble, *selection, *insertion, *bucket;
	
	printf("Enter No. Of Elements: ");
	scanf("%d", &n);
	printf("Enter Elements:\n");
	int *ptr=(int*)malloc(n*sizeof(int));
	for(int i=0; i<n; i++)
	{
		scanf("%d", ptr+i);
	}
	
		display(ptr, n, 0);
		bubble=bubble_sort(ptr, n);
		display(bubble, n, 1);	
	return 0;
}
