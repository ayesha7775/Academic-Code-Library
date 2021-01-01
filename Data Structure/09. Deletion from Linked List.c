//Deletion operation in a linked list
#include<stdio.h>
#include<malloc.h>

typedef struct node{
    int value;
    struct node *next;
} list;

list *start=NULL,*newNode;

void insert_node(){
    newNode=(list*)malloc(sizeof(list));
    if(newNode==NULL)
        printf("No enough space");
    else{
        printf("Enter the value of new node: ");
        scanf("%d",&newNode->value);
        newNode->next=NULL;
        if(start==NULL)
            start=newNode;
        else{
            newNode->next=start;
            start=newNode;
        }
        printf("\tSuccessfully inserted!");
    }
}

void delete_node(){
    list *temp=start,*prev=start;
    int current=1,loc=0,item;
    if(temp==NULL)
        printf("Empty linked list");
    else{
        printf("\nEnter the element which you want to delete: ");
        scanf("%d",&item);
        while(temp!=NULL){
            if(temp->value==item){
                loc=current;
                break;
            }
            prev=temp;
            temp=temp->next;
            current++;
        }
        if(loc==0)
            printf("\tElement is not found in the linked list!");
        else{
            if(loc==1)
                start=temp->next;
            else
                prev->next=temp->next;
            printf("\tSuccessfully deleted!");
        }
        free(temp);
    }
}

void display(){
    list *temp=start;
    printf("\n\nCurrent linked list: ");
    while(temp!=NULL){
        printf("%5d",temp->value);
        temp=temp->next;
    }
    printf("\n");
}

int main()
{
    int ch,val;
    do{
        printf("\nLinked list operation: ");
        printf("\n\t1.Insert node\n\t2.Delete node\n\t3.Exit");
        printf("\nEnter Your Choice:");
        scanf("%d",&ch);
        switch(ch){
                case 1:
                    insert_node();
                    display();
                    break;
                case 2:
                    delete_node();
                    display();
                    break;
                case 3:
                    exit(0);
                default:
                    printf("\nWrong choice!!!");
        }
    }while(ch!=3);
    return 0;
}
