//Search the maximum and minimum number from a linear array
#include<stdio.h>

//Search the largest element from the array
void max_val(int data[],int n,int max){
    int i;
    for(i=2;i<=n;i++)
    {
        if(max<data[i])
            max=data[i];
    }
    printf("\nLargest element of the array is %d",max);
}
//Search the smallest element from the array
void min_val(int data[],int n,int min){
    int i;
    for(i=2;i<=n;++i)
    {
        if(min>data[i])
            min=data[i];
    }
    printf("\nSmallest element of the array is %d",min);
}

int main()
{
    int i,n,data[30],max,min;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    printf("\nEnter the elements: ");
    for(i=1;i<=n;++i)
        scanf("%d",&data[i]);
    max=min=data[1];
    max_val(data,n,max);
    min_val(data,n,min);
    printf("\n");
    return 0;
}
