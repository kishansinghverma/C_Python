#include <stdio.h>
#include <stdlib.h>

typedef struct TREE
{
	int key;
	struct TREE *left;
	struct TREE *right;
}tree;

tree *root=NULL;

insert(int key)
{
	tree *node=(tree*)malloc(sizeof(tree));
	node->key=key;
	node->left=NULL;
	node->right=NULL;
	
	if(root==NULL)
		root=node;
	
	else
	{
		tree *temp=root;
		
		while(true)
		{
			if(key<temp->key)
			{
				if(temp->left==NULL)
				{
					temp->left=node;
					break;
				}
				temp=temp->left;
			}
			
			else if(key>temp->key)
			{
				if(temp->right==NULL)
				{
					temp->right=node;
					break;
				}
				temp=temp->right;
			}
			else
				break;
		}	
	}
	
}
void inorder()
{
	
}

int main()
{
	int arr[]={4,2,3,5,6,2};
	int n=sizeof(arr)/sizeof(arr[0]);
	
	for(int i=0; i<n; i++)
	{
		insert(arr[i]);
	}
	printf("Key: %d",root->left->right->key);
}

