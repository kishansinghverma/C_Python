#include <stdio.h>
#include <stdlib.h>

typedef struct DATA
{
	char word;
	int frequency;
	struct DATA *next;
	struct DATA *left;
	struct DATA *right;
}data;

int sum[10]={0};

data *root=NULL;

bool isSorted()
{
	data *temp=root;
	int min=temp->frequency;
	while(temp != NULL)
	{
		if(min<=temp->frequency)
			min=temp->frequency;
		else
			return false;
		temp=temp->next;
	}
	return true;
}

void sort()
{
	data *temp1=root;
	
	while(temp1 != NULL)
	{
		data *temp2=temp1;
		int min=temp1->frequency;
		data *loc=temp1;
		
		while(temp2 != NULL)
		{
			if(min>temp2->frequency)
			{
				min=temp2->frequency;
				loc=temp2;
			}
			temp2=temp2->next;
		}
		loc->frequency=temp1->frequency;
		temp1->frequency=min;
		
		char tmp=loc->word;
		loc->word=temp1->word;
		temp1->word=tmp;
		
		temp1=temp1->next;
	}	
}

void create_node(char word)
{
	data *node=(data*)malloc(sizeof(data));
	node->word=word;
	node->frequency=1;
	
	node->next=root;
	root=node;
}

void calc_freq(char dataword[])
{
	int i=1;
	create_node(dataword[0]);
	while(dataword[i] != '\0')
	{
		data *temp=root;
		bool flag=false;
		while(temp != NULL)
		{
			if(temp->word == dataword[i])
			{
				temp->frequency++;
				flag=true;
				break;
			}
			temp=temp->next;
		}
		if(!flag)
			create_node(dataword[i]);
		i++;
	}
}
void huffman_code()
{
	data *temp=root;
	
	sum[0]=temp->frequency + temp->next->frequency;
	temp=temp->next->next;
	
	printf("%d \n", sum[0]);
	
	if(sum[0]+temp->frequency > temp->frequency+temp->next->frequency)
	{
	}
	
}


int main()
{
	char dataword[]={"hdlakhdlahdaldhslfjdhaldjhalkjdslkdhfljdhfsjflkshdfkjdshflsdhfljsfkdsjflksdjfkldshgdsjfhldfhdkl"};
	calc_freq(dataword);
	
	if(!isSorted())
		sort();
		
	huffman_code();
	
	data *temp=root;
	while(temp != NULL)
	{
		printf("%c %d\n", temp->word, temp->frequency);
		temp=temp->next;
	}
		
}
