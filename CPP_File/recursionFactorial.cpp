#include <stdio.h>

int factorial(int n)
{
	if(n==1)
	{
		return 1;
	}
	else
	{
		
		return n*factorial(n-1);
	}
}
int main()
{
	int n;
	printf("Enter No. For Factorial: ");
	scanf("%d",&n);
	printf("Factorial Of Given Number: %d",factorial(n));
	return 0;
}
