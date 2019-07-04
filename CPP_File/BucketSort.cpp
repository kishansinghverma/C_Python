#include <stdio.h>
#include <stdlib.h>

typedef struct LIST
{
	float key;
	struct LIST *next;
}list;

list *bucket[10]={NULL};

float* sorted(int n)
{
	float *arr=(float*)malloc(sizeof(float)*n); 
	int j=0;
	for(int i=0; i<10; i++)
	{
		list *temp=bucket[i];
		while(temp != NULL)
		{
			arr[j]=temp->key;
			temp=temp->next;
			j++;
		}
	}
	return arr;
}
int insert(float key, int pos)
{
	list *temp=bucket[pos];
	list *node=(list*)malloc(sizeof(list));
	node->key=key;
	
	if (temp == NULL || temp->key >= key) 
    { 
        node->next = bucket[pos]; 
        bucket[pos] = node; 
    } 
    else
    {
        while (temp->next!=NULL && temp->next->key < key) 
        { 
            temp = temp->next; 
        } 
        node->next = temp->next; 
        temp->next = node; 
    }
}


int main()
{
	int n;
	printf("Enter Array Size: ");
	scanf("%d", &n);
	printf("Enter Elements:\n");
	
	float x;

	for(int i=0; i<n; i++)
	{
		scanf("%f", &x);
		insert(x, x*10);
	}
	
	float *a=sorted(n);
	
	printf("\nSorted Array is:\n");
	for(int i=0; i<n; i++)
		printf("%f ",a[i]);
}


