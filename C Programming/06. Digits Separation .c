//Separate all the digits from a number
#include<stdio.h>

int main()
{
    int n,i=-1,j,dgt[50];
    printf("Enter a natural number: ");
    scanf("%d",&n);
    //Storing digits in an array
    while(n>0)
    {
        i++;
        dgt[i]=n%10;
        n/=10;
    }
    printf("\n\tDigits are: ");
    for(j=i;j>=0;--j){
        printf("%d ",dgt[j]);
    }
    printf("\n");
    return 0;
}
