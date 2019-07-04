#include <stdio.h>
#include <stdlib.h>
 
int stack[10],top=-1;;
int size=sizeof(stack)/sizeof(stack[0]);
int main();
void push(int x)
{
	//Check for overflow...
	if(top>=size-1)
	{
		printf("\nStack Already Full!!\n");
	}
	else
	{
		top++;
		stack[top]=x;
		printf("\nPushed Element: %d\n",stack[top]);
	}
}
void pop()
{
	//Check for underflow...
	if(top<0)
	{
			printf("\nStack Is Empty!!\n");
	}
	else
	{
		printf("\nPoped Element: %d\n",stack[top]);
		top--;
	}
}
void peek()
{
	//Check for underflow...
	if(top<0)
	{
			printf("\nStack Is Empty!!\n");
	}
	else
	{
		printf("\nCurrent Element: %d\n",stack[top]);
	}
}
void display()
{
	//Check for underflow...
	if(top<0)
	{
			printf("\nStack Is Empty!!\n");
	}
	else
	{
		printf("\nStack Elements: ");
		for(int i=0; i<=top; i++)
		{
			printf("%d ",stack[i]);
		}
		printf("\n");
	}
}
int main()
{
	int ele,menu;
	printf("1. Push\n");
	printf("2. Pop\n");
	printf("3. Peek\n");
	printf("4. Display\n");
	printf("5. Exit\n");
	while(1)
	{
	printf("\n*********************************************\n");
	printf("Choose a stack operation: ");
	scanf("%d", &menu);
	switch(menu)
	{
		case 1:
			printf("\nEnter element to insert in stack: ");
			scanf("%d", &ele);
			push(ele);
			break;
		case 2:
			pop();
			break;
		case 3:
			peek();
			break;
		case 4:
			display();
			break;
		case 5:
			printf("\nProgram Terminated!!");
			exit(0);
			break;
		default:
			printf("\nInvalid Choice!!\n");	
	}
	}
}
