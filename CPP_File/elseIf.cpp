#include <stdio.h>

int n1,n2,sign;
int main()
{
	printf("Input two numbers: \n");
	scanf("%d %d", &n1,&n2);
	printf("Choose operation to perform: \n1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n");	
	scanf("%d", &sign);
	
	if(sign == 1)
	{
		printf("Sum of given is: %d", n1+n2);
	}
	else if(sign == 2)
	{
		printf("Diffrence of given is: %d", n1-n2);
	}
	else if(sign == 3)
	{
		printf("Product of given is: %d", n1*n2);
	}
	else if(sign == 4)
	{
		printf("Division of given is: %d", n1/n2);
	}
	else
	{
		printf("Invalid Choice!!");
	}
	return 0;
	
}
