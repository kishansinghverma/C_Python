#include <stdio.h>

int product(int n,int m)
{
	if(m==1)
	{
		return n;
	}
	else
	{
		return n+product(n,m-1);
	}
}

int main()
{
	int m,n;
	printf("Enter No. To Multiply:\n");
	scanf("%d %d", &m,&n);
	printf("Product Of Numbers: %d",product(m,n));
}
