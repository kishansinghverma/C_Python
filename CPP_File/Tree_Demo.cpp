#include <iostream>

using namespace std;

typedef struct Tree{
    int value;
    struct Tree *lchild;
    struct Tree *rchild;
}Node;

Node* root=NULL;

void insert(int value){
    Node *node = (Node *) malloc(sizeof(Node));
    node->value = value;
    node->lchild = NULL;
    node->rchild = NULL;

    if(root==NULL) {
        root=node;
    }
    else{

        Node *temp=root;
        while(temp != NULL){


            if(value>temp->value) {
                if(temp->rchild==NULL){
                    temp->rchild=node;
                    break;
                } else
                temp = temp->rchild;
            }
            else if(value<temp->value) {
                if(temp->lchild==NULL){
                    temp->lchild=node;
                    break;
                } else
                temp = temp->lchild;
            }
            else{
                cout << "Duplicate key("<<value<<") found, Insertion failed!!\n";
                free(node);
                return;
            }
        }
    }
    cout << "Key("<<value<<") Inserted Successfully!\n";
}

void preOrderTraverse(Node *temp){
    if(temp==NULL)
        return;

    cout <<temp->value<<" ";
    preOrderTraverse(temp->lchild);
    preOrderTraverse(temp->rchild);
}

void inOrderTraverse(Node *temp){

    if(temp==NULL)
        return;
    inOrderTraverse(temp->lchild);
    cout <<temp->value<<" ";
    inOrderTraverse(temp->rchild);
}
void postOrderTraverse(Node *temp){

    if(temp==NULL)
        return;
    postOrderTraverse(temp->lchild);
    postOrderTraverse(temp->rchild);
    cout <<temp->value<<" ";
}

int main(){
    insert(8);
    insert(4);
    insert(12);
    insert(2);
    insert(6);
    insert(10);
    insert(14);
    insert(1);
    insert(3);
    insert(5);
    insert(7);
    insert(9);
    insert(11);
    insert(13);
    insert(15);
    insert(20);
    insert(18);
    insert(19);
    insert(21);
    insert(8);
    cout<<"PreOrder Traversal of tree:\n";
    preOrderTraverse(root);
    cout<<"\nInOrderTraversal of tree:\n";
    inOrderTraverse(root);
    cout<<"\nPostOrder Traversal of tree:\n";
    postOrderTraverse(root);
}



