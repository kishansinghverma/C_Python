#include <stdio.h>
#include <stdlib.h>


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
int *bucket_sort(int ar[],int n)
{
	int max=ar[0], count=0, div=1, counter=0;
	for(int i=0; i<n; i++)
	{
		if(max<ar[i])
			max=ar[i];
	}
	while(max>0)
	{
		count++;
		max=max/10;
	}
	
	for(int l=0; l<count; l++)
	{
		int mgr[10]={0}, bucket[n][10]={{0},{0}};
		int loc, x=0;
		for(int i=0; i<n; i++)
		{
			loc=(ar[i]/div)%10;
			bucket[mgr[loc]][loc]=ar[i];
			mgr[loc]++;
		}
		for(int i=0; i<10; i++)
		{
			for(int j=0; j<mgr[i]; j++)
			{
				ar[x]=bucket[j][i];
				x++;
				counter++;
			}	
		}
		div=div*10;
	}
	printf("\n\nArray sorted in %d iterations:\n",counter);
	int *p=ar;
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
	
	printf("================================\n");
	printf("1. Bubble Sort.\n2. Selection Sort.\n3. Insertion Sort.\n4. Bucket Sort.\nSelect a method: ");
	scanf("%d", &algo);
	switch(algo)
	{
		case 1:
			display(ptr, n, 0);
			bubble=bubble_sort(ptr, n);
			display(bubble, n, 1);
			break;
			
		case 2:
			display(ptr, n, 0);
			selection=selection_sort(ptr, n);
			display(selection, n,1);
			break;
			
		case 3:
			display(ptr, n, 0);
			insertion=insertion_sort(ptr, n);
			display(insertion, n, 1);
			break;
		case 4:
			display(ptr,n, 0);
			bucket=bucket_sort(ptr,n);
			display(bucket, n, 1);
			break;
		default:
			printf("\nInvalid Option!!");
	}
	
	
	return 0;
}
