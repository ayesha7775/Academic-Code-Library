//Insertion operation in a linear array
#include<stdio.h>

//Insert an element into the given location of the array
void insert(int data[],int n,int k,int item){
    int i;
    for(i=n;i>=k;--i)
        data[i+1]=data[i];
    data[k]=item;
    printf("Element %d is inserted into location %d\n",item,k);
}

int main()
{
    int i,n,k,item,data[30];
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    printf("\nEnter the elements: ");
    for(i=1;i<=n;++i)
        scanf("%d",&data[i]);
    printf("\nEnter location and element for insertion: ");
    scanf("%d%d",&k,&item);
    insert(data,n,k,item);
    printf("\nUpdated array: ");
    for(i=1;i<=n+1;++i)
        printf("%5d",data[i]);
    printf("\n");
    return 0;
}
