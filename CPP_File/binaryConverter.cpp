#include<stdio.h>
int a;
int i=0;
int res[30];
int main()
{
	printf("*****Decimal to Binary Converter*****\n\n");
	printf("Input decimal No.: ");
	scanf("%d", &a);
	while(a != 0)
	{
		res[i]=a%2;
		a=a/2;
		i++;
	}
	for(int j=i-1; j>=0; j--)
	{
		printf("%d", res[j]);
	}
}
