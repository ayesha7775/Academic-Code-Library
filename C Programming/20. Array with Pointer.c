//Create an array of elements using pointer
#include<stdio.h>

int main()
{
    int size,*p;
    printf("Enter the size of an array: ");
    scanf("%d",&size);
    int data[size];
    //Pointer points to the start of the array
    p=data;
    printf("\nEnter the elements of the array: ");
    while(p<data+size)
    {
        scanf("%d",p);
        p++;
    }
    p=&data[size-1];
    while(p>=&data[0])
    {
        printf("%3d",*p);
        p--;
    }
    return 0;
}
