#include<stdio.h>
void swap();
int a=10;
int b=14;
int main()
{
	printf("Actual Value of A: %d",a);
	printf("\nActual Value of B: %d",b);
	swap();
	printf("\nSwapped Value of A: %d",a);
	printf("\nSwapped Value of B: %d",b);
}
void swap()
{
	int *x=&a;
	int *y=&b;
	int temp=*x;
	*x=*y;
	*y=temp;
	return;
}
