#include <stdio.h>

int main()
{
	int a[20]={0},b[20]={0}, deg1, deg2;
	printf("Enter the degree of polynomial 1: ");
	scanf("%d", &deg1);	
	for(int i=0; i<=deg1; i++)
	{
		printf("\nEnter the coff. of x^%d : ",i);
		scanf("%d", &a[i]);	
	}
	printf("\n\nEnter the degree of polynomial 2: ");
	scanf("%d", &deg2);	
	for(int i=0; i<=deg2; i++)
	{
		printf("\nEnter the coff. of x^%d : ",i);
		scanf("%d", &b[i]);	
	}
	printf("\nGiven polynomial 1:\n\n");
	printf("(%d)x^%d",a[deg1],deg1);	
	for(int i=deg1-1; i>=0; i--)
	{
		printf("+(%d)x^%d",a[i],i);	
	}
	printf("\n\nGiven polynomial 2:\n\n");
	printf("(%d)x^%d",b[deg2],deg2);	
	for(int i=deg2-1; i>=0; i--)
	{
		printf("+(%d)x^%d",b[i],i);	
	}
	int max=deg1>deg2?deg1:deg2;
	printf("\n\nSum of given polynomials:\n\n");
	printf("(%d)x^%d",a[max]+b[max],max);	
	for(int i=max-1; i>=0; i--)
	{
		printf("+(%d)x^%d",a[i]+b[i],i);	
	}
}
