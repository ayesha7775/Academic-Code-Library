//Find an element in a linear array using linear search
#include<stdio.h>

//Find the location of given element by searching linearly
void linear_search(int data[],int n,int item){
    int i,loc=0;
    for(i=1;i<=n;++i)
        if(data[i]==item)
            loc=i;
    if(loc!=0)
         printf("\nElement %d is found at location %d\n",item,loc);
    else
         printf("\nElement %d is not found\n",item);
}

int main()
{
    int i,n,item,data[30];
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    printf("\nEnter the elements: ");
    for(i=1;i<=n;++i)
        scanf("%d",&data[i]);
    printf("\nEnter the search element: ");
    scanf("%d",&item);
    linear_search(data,n,item);
    return 0;
}

