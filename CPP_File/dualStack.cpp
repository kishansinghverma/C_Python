#include <stdio.h>
#define size 20

int top1=-1, top2=0;
int stack[size];
int main();
void push1(int x)
{
	//Check for overflow...
	if(top1>=size-2)
	{
		printf("\nStack Already Full!!\n");
	}
	else
	{
		top1 += 2;
		stack[top1]=x;
		printf("\nPushed Element In Stack1: %d\n",stack[top1]);
	}
}
void push2(int x)
{
	//Check for overflow...
	if(top2>=size-1)
	{
		printf("\nStack Already Full!!\n");
	}
	else
	{
		top2 += 2;
		stack[top2]=x;
		printf("\nPushed Element In Stack2: %d\n",stack[top2]);
	}
}
int main()
{
	push1(12);
	push2(11);
	return 0;
}
