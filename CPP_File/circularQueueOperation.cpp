#include <stdio.h>
#include <stdlib.h>
#define size 3

int queue[size];
int f=-1,r=-1;
int main();
void enque(int x)
{
	//Checking for overflow
	if((r == size-1 && f==0)|| f == r+1)
	{
		printf("\nQueue Already Full!!\n");
	}
	else
	{
		r=(r+1)%size;
		queue[r]=x;
		printf("\nEnqued Element: %d\n",queue[r]);
	}
	if(f==-1)
	{
		f++;
	}
}
void deque()
{
	//Checking for underflow
	if(f == -1)
	{
		printf("\nQueue Empty!!\n");
	}
	else
	{
		printf("\nDequed Element: %d\n",queue[f]);
		f=(f+1)%size;
	}
	if(r+1==f)
	{
		f= -1;
		r= -1;
		printf("\nQueue Reset Done...\n");
	}
}
void peek()
{
	
	//Checking for underflow
	if(f == -1 || f==r+1)
	{
		printf("\nQueue Empty!!\n");
	}
	else
	{
		printf("\nCurrent Element: %d\n",queue[f]);
	}
}
void display()
{
	//Checking for underflow
	if(f == -1)
	{
		printf("\nQueue Empty!!\n");
	}
	else
	{
		printf("\nQueue Elements: ");
		int i=f;
		while(i != r)
		{
			printf("%d ", queue[i]);
			i=(i+1)%size;
		}
		printf("%d ", queue[i]);
	}
}
int main()
{
	int choice,ele;
	printf("1.Enque\n2.Deque\n3.Peek\n4.Display\n5.Exit\n");
	while(1)
	{
	printf("\n*******************************");
	printf("\nChoose a queue operation: ");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			printf("\nEnter element to enque: ");
			scanf("%d",&ele);
			enque(ele);
			break;
		case 2:	
			deque();
			break;
		case 3:
			peek();
			break;
		case 4:
			display();
			break;
		case 5:
			printf("\nProgram Terminated...");
			exit(0);
		default:
			printf("Invalid Choice!!");
	}
	}
	return 0;
}
