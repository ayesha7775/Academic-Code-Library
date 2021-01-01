//Calculate the sum of all the digits in a number
#include<stdio.h>

int main()
{
    int n,sum=0;
    printf("Enter an natural number: ");
    scanf("%d",&n);
    //Digits sum calculation
    while(n>0)
    {
        sum+=n%10;
        n/=10;
    }
    printf("\nSum of the digits of the number is: %d\n",sum);
    return 0;
}
