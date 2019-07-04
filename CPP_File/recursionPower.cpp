#include <stdio.h>

int power(int n,int m)
{ 
	if(m==1)
	{
		return n;
	}
	else
	{
		return n*power(n,m-1);
	}
}

int main()
{
	int m,n;
	printf("Enter No. For Coff. and Expo.:\n");
	scanf("%d %d", &m,&n);
	printf("Result Of Number: %d",power(m,n));
}
