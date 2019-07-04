#include <stdio.h>
#include <stdlib.h>

typedef struct polynomial
{
	int coff, expo;
	struct polynomial *next;
}TERM;

TERM *start=NULL;

void polynomial()
{
	TERM *ptr=(TERM*)malloc(sizeof(TERM));
	printf("Enter Exponent: ");
	scanf("%d",&ptr->expo);
	printf("Enter Coefficient: ");
	scanf("%d",&ptr->coff);
	ptr->next=NULL;
	
	if(start==NULL)
		start=ptr;
	
	else
	{
		int flag=0;
		TERM *tmp=start;
		while(tmp->next != NULL)
		{
			if(tmp->expo==ptr->expo)
			{
				tmp->coff += ptr->coff;
				flag=1;
			}
			tmp=tmp->next;
		}
		
		if(tmp->expo==ptr->expo)
		{
			tmp->coff += ptr->coff;
			flag=1;
		}
		
		if(flag==0)
			tmp->next=ptr;
	}	
}

void display()
{
	if(start==NULL)
		printf("Polynomial Empty!!\n");
		
	else
	{
		TERM *ptr=start;
		printf("\n%dx^%d",ptr->coff, ptr->expo);
		ptr=ptr->next;
		while(ptr != NULL)
		{
			printf(" + %dx^%d",ptr->coff, ptr->expo);
			ptr=ptr->next;
		}
		printf("\n\n");
	}
}

int main()
{
	while(true)
	{
		polynomial();
		display();	
	}
}
