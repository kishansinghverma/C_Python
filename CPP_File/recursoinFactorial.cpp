#include <stdio.h>

int fact(int n)
{
	if(n==1)
	{
		return 1;
	}
	else
	{
		return n*fact(n-1);
	}
}

int main()
{
	int n;
	printf("Enter No. To Factorise: ");
	scanf("%d", &n);
	printf("Factorial Of Number: %d",fact(n));
}
