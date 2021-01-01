//Insertion operation in a linked list
#include<stdio.h>
#include<malloc.h>

typedef struct node{
    int value;
    struct node *next;
}list;

list *start=NULL,*newNode;

void ins_beg(){
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

void ins_loc(){
    newNode=(list*)malloc(sizeof(list));
    if(newNode==NULL)
        printf("No enough space");
    else{
        int s_item,loc=0,current=1;
        list *temp=start;
        printf("Enter the value of new node: ");
        scanf("%d",&newNode->value);
        newNode->next=NULL;
        printf("Enter the element after which you want to insert %d: ",newNode->value);
        scanf("%d",&s_item);
        while(temp!=NULL){
            if(temp->value==s_item){
                loc=current;
                break;
            }
            temp=temp->next;
            current++;
        }
        if(loc==0)
            printf("\tElement is not found in the linked list!");
        else{
            newNode->next=temp->next;
            temp->next=newNode;
            printf("\tSuccessfully inserted!");
        }
    }
}

void ins_end(){
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
            list *temp=start;
            while(temp->next!=NULL)
                temp=temp->next;
            temp->next=newNode;
        }
        printf("\tSuccessfully inserted!");
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
        printf("\nLinked list insertions: ");
        printf("\n\t1.Insert at the beginning\n\t2.Insert at specific location\n\t3.Insert at the end\n\t4.Exit");
        printf("\nEnter Your Choice:");
        scanf("%d",&ch);
        switch(ch){
                case 1:
                    ins_beg();
                    display();
                    break;
                case 2:
                    ins_loc();
                    display();
                    break;
                case 3:
                    ins_end();
                    display();
                    break;
                case 4:
                    exit(0);
                default:
                    printf("\nWrong choice!!!");
        }
    }while(ch!=4);
    return 0;
}
