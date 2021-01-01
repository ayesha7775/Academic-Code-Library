//Stack operations using linked list
#include<stdio.h>
#include<malloc.h>

typedef struct node{
    int val;
    struct node *next;
}stack;

stack *top=NULL;

void push(){
    stack *newNode;
    newNode=(stack*)malloc(sizeof(stack));
    if(newNode==NULL)
        printf("\tOverflow");
    else{
        printf("\nEnter an element: ");
        scanf("%d",&newNode->val);
        if(top==NULL){
            top=newNode;
            newNode->next=NULL;
        }
        else{
            newNode->next=top;
            top=newNode;
        }
        printf("\tInserted successfully!");
    }
}

void pop(){
    stack *temp=top;
    if(top==NULL)
        printf("\tUnderflow");
    else{
        temp=temp->next;
        free(top);
        top=temp;
        printf("\tDeleted successfully!");
    }
}

void display(){
    stack *temp=top;
    printf("\nCurrent stack: ");
    if(temp==NULL)
        printf("Empty\n");
    else{
        printf("\n");
        while(temp!=NULL){
            printf("%5d\n",temp->val);
            temp=temp->next;
        }
    }
}

int main()
{
    int ch;
    do{
        printf("\nStack operations:\n\t1.Push\n\t2.Pop\n\t3.Exit");
        printf("\nEnter your choice: ");
        scanf("%d",&ch);
        switch(ch){
            case 1:
                    push();
                    display();
                    break;
            case 2:
                    pop();
                    display();
                    break;
            case 3:
                    exit(0);
            default:
                    printf("\nInvalid choice!");
        }
    }while(ch!=3);
    return 0;
}
