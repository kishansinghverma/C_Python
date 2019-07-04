#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
	int info;
	struct node *next;
}NODE;

NODE *head=0;

int counter(NODE *ptr)
{
	int count=0;
	while(ptr != NULL)
	{
		count++;
		ptr=ptr->next;
	}
	return count;
}

void headInsert()
{
	NODE *ptr=(NODE*)malloc(sizeof(NODE));
	printf("Insert Element: ");
	scanf("%d", &ptr->info);
	ptr->next=head;
	head=ptr;
}
void lastInsert()
{
	NODE *ptr=(NODE*)malloc(sizeof(NODE));
	NODE *index;
	printf("Insert Element: ");
	scanf("%d", &ptr->info);
	ptr->next=NULL;
	if(head==NULL)
	{
		head=ptr;
	}
	else
	{
		index=head;
		while(index->next != NULL)
		{
			index=index->next;
		}
		index->next =ptr;	
	}
}
int search(int a)
{
	NODE *ptr=head;
	int flag=0, count=0;
	if(head != NULL)
	{
		while(ptr != NULL)
		{
			count++;
			if(ptr->info==a)
			{
				flag=1;
				break;
			}
			ptr=ptr->next;
		}
		if(flag==0)
		{
			return flag;
		}
		else
		{
			return count;
		}
	}
}

void pos_insert(int loc, int ele)
{
	int count;
	NODE *ptr=(NODE*)malloc(sizeof(NODE));
	NODE *index;
	ptr->info=ele;
	
	if(loc>0)
	{
		if(head != NULL)
		{
			index=head;
			
			count=counter(index);
			if(loc<=count+1)
			{
				if(loc==1)
				{
					ptr->next=head;
					head=ptr;
				}
				else
				{
					index=head;
					for(int i=1; i<loc-1; i++)
					{
						index=index->next;
					}
        			ptr->next=index->next;
        			index->next=ptr;
				}
			}
			else
			{
				printf("\nInvalid Location!!\nList Has Only %d Elements!!\n", count);
			}
		}
		if((head == NULL) && (loc==1))
		{
			ptr->next=NULL;
			head=ptr;
		}
		if((loc>1) && (head == NULL))
			printf("\nInvalid Location!!\n");
	}
	else
		printf("\nInvalid Location!!\n");
}

void after_item()
{
	int p_ele, ele, pos;
	printf("Specify Preceding Element : ");
	scanf("%d", &p_ele);
	printf("Insert Element : ");
	scanf("%d", &ele);
	pos=search(p_ele);
	
	if(pos != 0)
		pos_insert(pos+1, ele);
	else
		printf("\nNo Such Element Found!!");
}
void before_item()
{
	int s_ele, ele, pos;
	printf("Specify Succeeding Element : ");
	scanf("%d", &s_ele);
	printf("Insert Element : ");
	scanf("%d", &ele);
	pos=search(s_ele);
	
	if(pos != 0)
		pos_insert(pos, ele);
	else
		printf("\nNo Such Element Found!!");
}
void delete_head()
{
	if(head==NULL)
	{
		printf("\nNothing To Delete!!");
	}
	else
	{
		head=head->next;
	}
}
void delete_last()
{
	if(head==NULL)
	{
		printf("\nNothing To Delete!!");
	}
	else
	{
		NODE *ptr=head;
		int count;
		count=counter(ptr);
		
		if(count==1)
		{
			head=NULL;
		}
		for(int i=1; i<count-1; i++)
		{
			ptr=ptr->next;
		}
		ptr->next=NULL;
	}
}

void delete_pos(int loc)
{
	if(loc>0)
	{
		int count;
		NODE *ptr=head;
		count=counter(ptr);
		if(count==0)
		{
			printf("\nInvalid Location!!");
		}
		else
		{
			if(loc>count)
			{
				printf("\nInvalid Location!!\nList Has Only %d Items!!\n", count);
			}
			else
			{
				if(loc==1)
				{
					head=head->next;
				}
				else
				{
					for(int i=1; i<loc-1; i++)
					{
						ptr=ptr->next;
					}
					ptr->next=ptr->next->next;
				}
			}
		}	
	}
	else
	{
		printf("\nInvalid Location!!");
	}
}
void delete_before()
{
	int s_ele, loc;
	printf("Enter Succeeding Element: ");
	scanf("%d", &s_ele);
	loc=search(s_ele);
	
	if(loc != 0)
		delete_pos(loc-1);
	else
		printf("\nNo Such Element Found!!");
}

void delete_after()
{
	int p_ele, loc;
	printf("Enter Preceding Element: ");
	scanf("%d", &p_ele);
	loc=search(p_ele);
	
	if(loc != 0)
		delete_pos(loc+1);
	else
		printf("\nNo Such Element Found!!");
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
int main()
{
	while(true)
	{
		int choice, ele, loc, result;
		printf("\n______________________________\n1. Search.\n2. Insert At Head.\n3. Insert At Last.\n4. Insert At Position.\n5. Insert Before Element.\n6. Insert After Element.\n7. Delete From Head.\n8. Delete From Last.\n9. Delete From Position.\n10. Delete Before Element.\n11. Delete After Element.\n\nChoose Any Operation: ");
		scanf("%d", &choice);
		switch(choice)
		{
			case 1:
				printf("Search Element: ");
				scanf("%d", &ele); 
				result=search(ele);
				if(result==0)
					printf("\nNo Such Element Found!!");
				else
					printf("\nElement found At %d Position", result);
				display();
				break;
			case 2:
				headInsert();
				display();
				break;
			
			case 3:
				lastInsert();
				display();
				break;
		
			case 4:
				printf("Specify Position Of Element: ");
				scanf("%d", &loc);
				printf("Insert Element: ");
				scanf("%d", &ele); 
				pos_insert(loc, ele);
				display();
				break;
			case 5:
				before_item();
				display();
				break;
			case 6:
				after_item();
				display();
				break;
			case 7:
				delete_head();
				display();
				break;
			case 8:
				delete_last();
				display();
				break;
			case 9:
				printf("Specify Position Of Element: ");
				scanf("%d", &loc);
				delete_pos(loc);
				display();
				break;
			case 10:
				delete_before();
				display();
				break;
			case 11:
				delete_after();
				display();
				break;			
			default:
				printf("Invalid Operation!!\nTry Again...");
		}
	}
	return 0;
}
