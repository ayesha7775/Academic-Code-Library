//Calculate the sum of an array elements using pointer
#include<stdio.h>

int main()
{
    int size,*p,s=0;
    printf("Enter the size of an array: ");
    scanf("%d",&size);
    int data[size];
    printf("\nEnter the elements: ");
    p=data;
    while(p<data+size)
    {
        scanf("%d",p);
        s+=*p;
        p++;
    }
    printf("\nSum of the elements: %d\n",s);
    return 0;
}
