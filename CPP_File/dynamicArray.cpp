#include<stdio.h>
int main()
{
	int i;
	int sum=0;
	int n;
	int a[100];
	printf("Enter Array Size: ");
	scanf("%d", &n);
	for(i=0; i<n; i++)
	{
		printf("Enter Element %d: ",i+1);
		scanf("%d", &a[i]);
	}
	for(i=0; i<n; i++)
	{
		printf("Element %d is: %d \n",i+1,a[i]);
	}
	return(0);
}
