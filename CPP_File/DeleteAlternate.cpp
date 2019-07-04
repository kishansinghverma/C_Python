#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
	int info;
	struct node *next;
}NODE;

NODE *head=0;

void headInsert(int info)
{
	NODE *ptr=(NODE*)malloc(sizeof(NODE));
	ptr->info=info;
	ptr->next=head;
	head=ptr;
}
void display()
{
	NODE *tmp=head;
	if(head==NULL)
	{
		printf("\nList Empty!!");
	}
	else
	{
		printf("\nList Items: %d ", tmp->info);
		tmp=tmp->next;
		while(tmp != NULL)
		{
			printf("-->> %d ", tmp->info);
			tmp=tmp->next;	
		}
	}
}
void alter()
{
	NODE *ptr, *temp, *index;
	ptr=NULL;
	while(head != NULL)
	{
		temp=(NODE*)malloc(sizeof(NODE));
		if(ptr==NULL)
		{                                                                                                                                                                                                                                                          
			temp->next=ptr;
			temp->info=head->info;
			ptr=temp;
		}
		else
		{
			index=ptr;
			while(index->next != NULL)
			{
				index=index->next;
			}
			temp->next=NULL;
			temp->info=head->info;
			index->next=temp;
		} 
		head=head->next->next;
	}
	head=ptr;
}
int main()
{
	headInsert(18);
	headInsert(17);
	headInsert(16);
	headInsert(15);
	headInsert(14);
	headInsert(13);
	headInsert(12);
	headInsert(11);
	headInsert(10);
	headInsert(9);
	display();
	alter();
	display();
}
