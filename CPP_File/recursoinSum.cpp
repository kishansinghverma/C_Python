#include <stdio.h>

int sum(int n,int m)
{ 
	if(m==0)
	{
		return n;
	}
	else
	{
		return sum(n+1,m-1);
	}
}

int main()
{
	int m,n;
	printf("Enter No. To Add:\n");
	scanf("%d %d", &m,&n);
	printf("Sum Of Numbers: %d",sum(m,n));
}
