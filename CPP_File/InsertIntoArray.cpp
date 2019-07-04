//Adding to 1D array

#include<stdio.h>
int main()
{
	//Program to copy an array and add new element in array at specified position 
	
	int n,array1[100],array2[100],i,j,ele,pos;
	printf("Enter the size of the array\n");
	scanf("%d",&n);
	printf("\nEnter the elements in an array\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&array1[i]);
	}
	
	printf("\nEnter the position to insert an array\n");
	scanf("%d",&pos);
	printf("\nEnter the element at %d position\n",pos);
	scanf("%d",&ele);
	
	printf("\nBefore adding an elemnt array is\n");
	for(i=0;i<n;i++)
	{
		printf("%d ",array1[i]);
	}
	printf("\nNow element is inserting.\n");
	
	for(i=n; i>=pos; i--)
	{
		array1[i]=array1[i-1];
	}
	array1[pos-1]=ele;
	printf("\nNow the final new array elemets are\n");
	for(i=0;i<=n;i++)
	{
		printf("%d ",array1[i]);
	}
}
