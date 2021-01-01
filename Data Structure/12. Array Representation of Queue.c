//Queue operations using array
#include<stdio.h>
#define size 5

int queue[size+1];
int rear=0,front=0;

void Qinsert()
{
    int data;
    if((front==1 && rear==size) || front==rear+1)
        printf("\tOverflow");
    else{
        printf("\nEnter an element: ");
        scanf("%d",&data);
        if(front==0)
            front=rear=1;
        else if(rear==size)
            rear=1;
        else
            rear+=1;
        queue[rear]=data;
        printf("%d inserted successfully\n",data);
    }
}

void Qdelete()
{
    int data;
    if(front==0)
        printf("\tUnderflow");
    else{
        data=queue[front];
        if(front==rear)
            front=rear=0;
        else if(front==size)
            front=1;
        else
            front+=1;
        printf("Deleted element is: %d\n",data);
    }
}

void display()
{
    int i;
    printf("\nCurrent queue: ");
    if(front==0 && rear==0)
        printf("Empty\n");
    else{
        if(front<=rear)
            for(i=front;i<=rear;++i)
                printf("%5d",queue[i]);
        else{
            for(i=front;i<=size;++i)
                printf("%5d",queue[i]);
            for(i=1;i<=rear;++i)
                printf("%5d",queue[i]);
        }
        printf("\n");
    }
}

int main()
{
    int ch;
    do{
        printf("\nQueue operations:\n\t1.Insert\n\t2.Delete\n\t3.Exit");
        printf("\nEnter your choice: ");
        scanf("%d",&ch);
        switch(ch){
            case 1:
                    Qinsert();
                    display();
                    break;
            case 2:
                    Qdelete();
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
