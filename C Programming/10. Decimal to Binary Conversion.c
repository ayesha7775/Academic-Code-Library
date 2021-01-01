//Convert a decimal number to binary
#include<stdio.h>

int main()
{
    int n,i=-1,j,arr[100];
    printf("Enter a natural number: ");
    scanf("%d",&n);
    //Decimal to binary conversion
    while(n>0)
    {
        i++;
        arr[i]=n%2;
        n/=2;
    }
    printf("\nBinary representation: ");
    for(j=i;j>=0;--j)
    {
        printf("%d",arr[j]);
    }
    printf("\n");
    return 0;
}
