#include <iostream>
#include <time.h>
#include <cmath>

using namespace std;

typedef struct TREE
{
	int key;
	struct TREE *lchild;
	struct TREE *rchild;
}node;

node *root=NULL;
int size=0;

char* getPosition(int n){
    char *temp=(char*)malloc(sizeof(char)*32);
    itoa(n+1, temp, 2);
    int i=0;
    while (temp[i] != '\0'){
        temp[i]=temp[i+1];
        i++;
    }
    return temp;
}

/////////////////////////////////////////////////////
int height(int n){
    int h=ceil(log(n)/log(2));
    if(h>0)
        return h;
    else
        return 0;
}

void printGivenLevel(node* root, int level){
    if(root==NULL)
        return;
    else if(level==1)
        cout<<root->key<<" ";
    else{
        printGivenLevel(root->lchild, level-1);
        printGivenLevel(root->rchild, level-1);
    }
}
void printLevelOrder(node* root){
    int h = height(size);
    for (int i = 1; i <= h; i++)
        printGivenLevel(root, i);
}

/////////////////////////////////////////////////////

void insert(int value){
    node *inode=(node*)malloc(sizeof(node));
    inode->key=value;
    inode->rchild=NULL;
    inode->lchild=NULL;
    if(root==NULL)
        root=inode;

    else {
        node *temp = root;
        char *position = getPosition(size);
        int i = 0;
        while (position[i+1] != '\0') {
            if (position[i] == '1')
                temp = temp->rchild;
            else
                temp = temp->lchild;
            i++;
        }
        if (position[i]=='0')
            temp->lchild = inode;
        else
            temp->rchild = inode;
    }
    size++;
    cout<<"Key("<<value<<") Inserted successfully!\n";
}

int main()
{
    for(int i=0; i<100; i++){
        insert(i);
    }

    printLevelOrder(root);
}



