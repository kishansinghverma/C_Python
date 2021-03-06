#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
	int info;
	struct node *next;
	struct node *prev;
}NODE;

NODE *start=NULL;
void headInsert(int x)
{
	NODE *ptr=(NODE*)malloc(sizeof(NODE));
	
	ptr->info=x;
	if(start == NULL)
	{
		start=ptr;
		ptr->next=start;
		ptr->prev=start;
	}
	else
	{
		NODE *tmp=start;
		while(tmp->next != start)
			tmp=tmp->next;
		
		ptr->prev=tmp;
		tmp->next=ptr;
		ptr->next=start;
		start->prev=ptr;
		start=ptr;
	}
}


void lastInsert(int x)
{
	NODE *ptr=(NODE*)malloc(sizeof(NODE));
	
	ptr->info=x;
	if(start == NULL)
	{
		start=ptr;
		ptr->next=start;
		ptr->prev=start;
	}
	else
	{
		NODE *tmp=start;
		
		while(tmp->next != start)
			tmp=tmp->next;
		
		ptr->prev=tmp;
		ptr->next=start;
		start->prev=ptr;
		tmp->next=ptr;
	}
}

void fwdDisplay()
{
	if(start==NULL)
	{
		printf("\nNo element!\n");
	}
	else
	{
		NODE *tmp=start;
		printf("\n");
		while(tmp->next != start)
		{
			printf("%d ", tmp->info);
			tmp=tmp->next;
		}
		printf("%d \n", tmp->info);
	}
}

void rwdDisplay()
{
	if(start==NULL)
	{
		printf("\nNo element!\n");
	}
	else
	{
		NODE *tmp=start;
		printf("\n");
		while(tmp->next != start)
		{
			tmp=tmp->next;
		}
		while(tmp != start)
		{
			printf("%d ", tmp->info);
			tmp=tmp->prev;
		}
		printf("%d\n", tmp->info);
	}
}

void headDelete()
{
	if(start==NULL)
	{
		printf("\nList Empty!\n");
	}
	else if(start->next==start)
	{
		start=NULL;
	}
	else
	{
		NODE *tmp=start;
		while(tmp->next != start)
			tmp=tmp->next;
		
		start=start->next;
		start->prev=tmp;
		tmp->next=start;	
	}
}

void lastDelete()
{
	if(start==NULL)
	{
		printf("\nList Empty!\n");
	}
	else if(start->next==start)
	{
		start=NULL;
	}
	else
	{
		NODE *tmp=start;
		while(tmp->next->next != start)
			tmp=tmp->next;	
		tmp->next=start;
		start->prev=tmp;
	}
}
int main()
{
	while(1)
	{
		int choice,ele;
		printf("1. Insert At Head\n2. Insert At Last\n3. Forward Display\n4. Backward Display\n5. Delete From Head\n6. Delete From Last\nEnter Choice: ");
		scanf("%d", &choice);
		
		switch(choice)
		{
			case 1:
				printf("\nInsert Element: ");
				scanf("%d", &ele);
				headInsert(ele);
				break;
			
			case 2:
				printf("\nInsert Element: ");
				scanf("%d", &ele);
				lastInsert(ele);
				break;
			
			case 3:
				fwdDisplay();
				break;
			
			case 4:
				rwdDisplay();
				break;
				
			case 5:
				headDelete();
				break;
			
			case 6:
				lastDelete();
				break;
		}
		
	}
	return 0;
}
