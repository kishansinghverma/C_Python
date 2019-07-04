#include <stdio.h>
#include <stdlib.h>

typedef struct poly
{
	int coff, expo;
	struct poly *next;
}TERM;

TERM *start1=NULL;
TERM *start2=NULL;

void polynomial(TERM *poly1)
{
	TERM *poly=poly1;
	TERM *ptr=(TERM*)malloc(sizeof(TERM));
	printf("\nInput Coefficient: ");
	scanf("%d", &ptr->coff);
	printf("Input Exponent: ");
	scanf("%d", &ptr->expo);
	ptr->next=NULL;

	if(poly==NULL)
	{
		poly=ptr;	
	}
	else
	{
		TERM *temp=poly;
		int flag=0;
		while(temp->next != NULL)
		{
			if(ptr->expo==temp->expo)
			{
				temp->coff += ptr->coff;
				flag=1;
			}
			temp=temp->next;
		}
		if(flag==0)
			temp->next=ptr;
	}
}

void display(TERM *poly1)
{
	TERM *poly=poly1;
	if(poly==NULL)
		printf("\nPolynomial Empty!!");
	else
	{
		TERM *ptr=poly;
		
		printf("\nGiven Polynomial:");
		printf("\n%dx^%d ", ptr->coff, ptr->expo);
		ptr=ptr->next;
		
		while(ptr != NULL) 
		{
			printf("+ %dx^%d ", ptr->coff, ptr->expo);
			ptr=ptr->next;
		}
		printf("\n");
	}
}
	

int main()
{
	while(true)
	{
		polynomial(&start1);
		display(&start1);
	}
	return 0;
}
