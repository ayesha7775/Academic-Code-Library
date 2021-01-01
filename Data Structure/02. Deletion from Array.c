//Deletion operation in a linear array
#include<stdio.h>

//Delete an element from a given location of an array
void delete(int data[],int n,int k){
    int i,item;
    item=data[k];
    for(i=k;i<n;++i)
        data[i]=data[i+1];
    printf("Element %d is deleted from location %d\n",item,k);
}

int main()
{
    int i,n,k,data[30];
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    printf("\nEnter the elements: ");
    for(i=1;i<=n;++i)
        scanf("%d",&data[i]);
    printf("\nEnter the location of the element you want to delete: ");
    scanf("%d",&k);
    delete(data,n,k);
    printf("\nUpdated array: ");
    for(i=1;i<n;++i)
        printf("%5d",data[i]);
    printf("\n");
    return 0;
}
