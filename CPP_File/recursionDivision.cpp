#include <stdio.h>
int count=0;
float division(int n,int m)
{
	if(n<m)
	{
		return (n/m);
	}
	else
	{
		return 1+division(n-m,m);
	}
}

int main()
{
	int m,n;
	printf("Enter No. For Division:\n");
	scanf("%d %d", &n,&m);
	printf("Division Of Numbers: %d",division(n,m));
}
