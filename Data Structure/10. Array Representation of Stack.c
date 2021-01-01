//Stack operations using array
#include<stdio.h>
#define size 5

int top=0,stack[size+1];

void push(){
    int data;
    if(top==size)
        printf("\tOverflow\n");
    else{
        printf("\nEnter an element: ");
        scanf("%d",&data);
        top++;
        stack[top]=data;
        printf("%d pushed successfully\n",data);
    }
}

void pop(){
    int data;
    if(top==0)
        printf("\tUnderflow");
    else{
        data=stack[top];
        printf("Popped data is: %d\n",data);
        top--;
    }
}

void display(){
    int i;
    printf("\nCurrent stack: ");
    if(top==0)
        printf("Empty\n");
    else{
        printf("\n");
        for(i=top; i>0; --i)
            printf("%5d\n",stack[i]);
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
                    printf("\tWrong choice!");
        }
    }while(ch!=3);
    return 0;
}
