//Deletion in Binary Search Tree
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

void delete(){
    if(root==NULL)
        printf("\tUnderflow");
    else{
        int item;
        bst *current=root,*parent=NULL,*child,*c_parent;
        printf("\nEnter the element which you want to delete: ");
        scanf("%d",&item);
        while(current->data!=item){
            parent=current;
            if(item<current->data)
                current=current->left;
            else
                current=current->right;
        }//current node needs to be deleted and parent is the parent node of this node
        if(current->left==NULL && current->right==NULL)
            child=NULL;//no child
        else if(current->left==NULL)
            child=current->right;//only child at right
        else if(current->right==NULL)
            child=current->left;//only child at left
        else{
            c_parent=current;
            child=current->right;
            while(child->left!=NULL){
                c_parent=child;//parent node of smallest node
                child=child->left;//smallest child of right subtree
            }
            if(c_parent->left==child)                       //parent pointer that points  //
                c_parent->left=child->right;           //                to the child              //
            else                                                       //                      updated              //
                c_parent->right=child->right;   //             by the right subtree   //
            child->left=current->left;//left subtree of current(deleted) node assigned to child
            child->right=current->right;//right subtree of current(deleted) node assigned to child
        }
        if(parent!=NULL){
            if(parent->left==current)
                parent->left=child;
            else
                parent->right=child;
        }
        else
            root=child;
        free(current);
        printf("\tDeleted successfully!");
    }
}

void inorder(bst *root){
    if(root!=NULL){
        inorder(root->left);
        printf("%5d",root->data);
        inorder(root->right);
    }
}

int main(){
    int ch;
    do{
        printf("\nBST operations:");
        printf("\n\t1.Insertion\n\t2.Deletion\n\t3.Inorder Traversing\n\t4.Exit");
        printf("\nEnter your choice: ");
        scanf("%d",&ch);
        switch(ch){
            case 1:
                    insert();
                    break;
            case 2:
                    delete();
                    break;
            case 3:
                    printf("Inorder BST: ");
                    inorder(root);
                    break;
            case 4:
                    exit(0);
            default:
                    printf("Wrong choice!!!");
        }
    }while(ch!=4);
    return 0;
}
