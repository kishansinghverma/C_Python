#include<stdio.h>

int in,n,n1;

int main()
{
	printf("**********Area Calculator**********\n\n");
	printf("Area to be calculated for:\n1. Square\n2. Rectangle\n3. Triangle\n");
	scanf("%d", &in);
	switch(in)
	{
	case 1:
		printf("Enter side of square: ");
		scanf("%d", &n);
		printf("\nArea of square: %d", n*n);
		break;
	case 2:
		printf("Enter sides of rectangle:\n");
		scanf("%d %d", &n,&n1);
		printf("Area of rectangle: %d", n*n1);
		break;
	case 3:
		printf("Enter side of triangle: ");
		scanf("%d", &n);
		printf("\nArea of triangle: %f", 1.732/4.00*n*n);
		break;
	default:
		printf("Invalid Choice!!");
		break;
	}
}
