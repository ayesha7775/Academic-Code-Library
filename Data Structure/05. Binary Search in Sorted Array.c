//Find an element in a linear array using binary search
#include<stdio.h>

//Find the location of the given element by comparing to the middle elements of sorted array
void binary_search(int data[],int n,int item){
    int beg=1,end=n,mid=(beg+end)/2;
    while((beg<=end)&&(data[mid]!=item)){
        if(item<data[mid])
            end=mid-1;
        else
            beg=mid+1;
        mid=(beg+end)/2;
    }
    if(data[mid]==item)
        printf("\nElement %d is found at location %d\n",item,mid);
    else
        printf("\nElement %d is not found\n",item);
}

int main()
{
    int i,n,item,data[30];
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    printf("\nEnter the elements in ascending order: ");
    for(i=1;i<=n;++i)
        scanf("%d",&data[i]);
    printf("\nEnter the search element: ");
    scanf("%d",&item);
    binary_search(data,n,item);
    return 0;
}
