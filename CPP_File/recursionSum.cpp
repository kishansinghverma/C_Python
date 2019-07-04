#include <stdio.h>

int sum(int n)
{
	if(n==1)
	{
		return 1;
	}
	else
	{
		
		return n+sum(n-1);
	}
}
int main()
{
	int n;
	printf("Enter No. For Sum: ");
	scanf("%d",&n);
	printf("Sum Of Numbers from 0: %d",sum(n));
	return 0;
}
