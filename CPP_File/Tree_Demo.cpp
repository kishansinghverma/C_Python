#include <iostream>

using namespace std;

typedef struct Tree{
    int value;
    struct Tree *lchild;
    struct Tree *rchild;
}Node;

Node* root=NULL;

void insertKey(int value){
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

void deleteKey(int value){

}

int main(){
    bool flag= true;
    int option;
    while (flag){
        cout<<"\nSelect operation:\n1. Insert Key\n2. Delete Key\n3. PreOrder Traversal\n4. InOrder Traversal\n";
        cout<<"5. PostOrder Traversal\n6. Exit\n";
        cout<<"Select option: ";
        cin >> option;

        switch (option){
            case 1: {
                int key;
                cout <<"Enter Key to insert: ";
                cin >> key;
                insertKey(key);
                break;
            }
            case 2: {
                int key;
                cout <<"Enter Key to remove: ";
                cin>> key;
                deleteKey(key);
                break;
            }
            case 3:{
                cout<<"PreOrder Traversal of tree:\n";
                preOrderTraverse(root);
                break;
            }
            case 4:{
                cout<<"\nInOrderTraversal of tree:\n";
                inOrderTraverse(root);
                break;
            }
            case 5:{
                cout<<"\nPostOrder Traversal of tree:\n";
                postOrderTraverse(root);
                break;
            }
            case 6: {
                flag = false;
                break;
            }
            default:
                cout<<"Invalid Option! Try Again\n";
        }
    }
}



