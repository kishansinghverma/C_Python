#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
	int info;
	struct node *next;
}NODE;

NODE *head=NULL;

void insert()
{
	NODE *ptr=(NODE*)malloc(sizeof(NODE));
	printf("\nEnter Element: ");
	scanf("%d", &ptr->info);
	
	if(head==NULL)
	{
		head=ptr;
		ptr->next=head;
	}
	else
	{
		NODE *tmp=head;  
        while(tmp->next != head )
		{
			tmp=tmp->next;	   
		}       
        tmp -> next = ptr;
        ptr->next= head; 
	}
	
}

void display()
{
	NODE *ptr=head;
	while(ptr->next != head)
	{
		printf("%d  ", ptr->info);
		ptr=ptr->next;
	}
	printf("%d  ", ptr->info);
}
int main()
{
	while(true)
	{
		insert();
		display();
	}
	return 0;
}
