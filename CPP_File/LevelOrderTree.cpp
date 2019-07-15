#include <iostream>
using namespace std;

typedef struct TREE
{
	int key;
	struct TREE *lchild;
	struct TREE *rchild;
}node;

node *root=NULL;
int size=0;

char* getPosition(){
    char *temp=(char*)malloc(sizeof(char)*32);
    itoa(size, temp, 2);
    int i=0;
    while (temp[i+1] != '\0')
        i++;
    temp[i]='\0';
    return temp;
}

void insert(int value){
    node *inode=(node*)malloc(sizeof(node));
    inode->key=value;
    inode->rchild=NULL;
    inode->lchild=NULL;
    if(root==NULL)
        root=inode;

    else {
        node *temp = root;
        char *position = getPosition();
        int i = 1;
        while (position[i] != '\0') {
            if (position[i] == '1')
                temp = temp->rchild;
            else
                temp = temp->rchild;
            i++;
        }
        if (size % 2 == 1)
            temp->lchild = inode;
        else
            temp->rchild = inode;
    }
    size++;
}

int main()
{
    insert(10);
    insert(20);
    insert(30);
    insert(40);
    insert(50);
    insert(60);

    cout<<root->key<<" "<<root->lchild->key<<" "<<root->rchild->key;
}

