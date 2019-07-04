#include <stdio.h>

int main()
{
	int a[20], deg;
	printf("Enter the degree of polynomial: ");
	scanf("%d", &deg);	
	for(int i=0; i<=deg; i++)
	{
		printf("\nEnter the coff. of x^%d : ",i);
		scanf("%d", &a[i]);	
	}
	printf("\nGiven polynomial:\n\n");
	printf("(%d)x^%d",a[deg],deg);	
	for(int i=deg-1; i>=0; i--)
	{
		printf("+(%d)x^%d",a[i],i);	
	}
}
