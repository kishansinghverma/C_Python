#include <limits.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct TREE
{
	int key;
	struct TREE *left;
	struct TREE *right; 
}tree;

tree *root=NULL;

insert(int data)
{
	tree *node=(tree*)malloc(sizeof(tree));
	node->left=node->right=NULL;
	node->key=data;
	
	if(root==NULL)
		root=node;
	
	else
	{
		tree *temp=root;
		
		while(temp!=NULL)
		{
			printf("%d",temp->key);
			if(data<temp->key)
			{
				
				temp=temp->left;
			}
			else if(data>temp->key)
			{
				printf(" Right ");
				temp=temp->right;
			}
		}
		
		temp=node;
	}
	
}

int main()
{
	int arr[]={3,2,5,6,1};
	int n=sizeof(arr)/sizeof(arr[0]);
	
	for(int i=0; i<n; i++)
	{
		insert(arr[i]);
	}
	printf("Key: %d",root->key);
}

