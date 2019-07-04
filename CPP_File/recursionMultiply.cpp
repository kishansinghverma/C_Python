#include <stdio.h>

int product(int n, int m)
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
	int n,m;
	printf("Enter Two No. For Multiply:\n");
	scanf("%d %d",&n,&m);
	printf("Product of given No: %d",product(n,m));
	return 0;
}
