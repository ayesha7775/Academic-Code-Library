//Insertion in Binary Search Tree
#include<stdio.h>
#include<malloc.h>

typedef struct node{
    int data;
    struct node *left, *right;
}bst;

bst *root=NULL;

void insert(){
    bst *newNode;
    newNode=(bst*)malloc(sizeof(bst));
    if(newNode==NULL)
        printf("\tOverflow");
    else{
        printf("\nEnter the element: ");
        scanf("%d",&newNode->data);
        newNode->left=newNode->right=NULL;
        if (root==NULL)
            root=newNode;
        else{
            bst *current=root, *parent;//Pointer parent store the parent node of current node
            while(current!=NULL){
                parent=current;
                if(newNode->data < current->data)
                    current=current->left;
                else
                    current = current->right;
            }
            if(newNode->data < parent->data)
                parent->left = newNode;
            else
                parent->right = newNode;
        }
        printf("\tInserted successfully!");
    }
}

void preorder(bst *root){
    if(root!=NULL){
        printf("%5d",root->data);
        preorder(root->left);
        preorder(root->right);
    }
}

void inorder(bst *root){
    if(root!=NULL){
        inorder(root->left);
        printf("%5d",root->data);
        inorder(root->right);
    }
}

void postorder(bst *root){
    if(root!=NULL){
        postorder(root->left);
        postorder(root->right);
        printf("%5d",root->data);
    }
}

int main(){
    int ch;
    do{
        printf("\nBST operations:");
        printf("\n\t1.Insertion\n\t2.Preorder Traversal\n\t3.Inorder Traversal\n\t4.Postorder Traversal\n\t5.Exit");
        printf("\nEnter your choice: ");
        scanf("%d",&ch);
        switch(ch){
            case 1:
                    insert();
                    break;
            case 2:
                    printf("Preorder BST: ");
                    preorder(root);
                    break;
            case 3:
                    printf("Inorder BST: ");
                    inorder(root);
                    break;
            case 4:
                    printf("Postorder BST: ");
                    postorder(root);
                    break;
            case 5:
                    exit(0);
            default:
                    printf("Wrong choice!!!");
        }
    }while(ch!=5);
    return 0;
}
