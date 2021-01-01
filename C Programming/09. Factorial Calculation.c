//Calculate the factorial of a given number
#include<stdio.h>

int main ()
{
    int i,n,f=1;
    printf("Enter a natural number: ");
    scanf("%d",&n);
    //Factorial of n calculation
    for(i=1;i<=n;i++)
    {
        f=f*i;
    }
    printf("\nFactorial of %d or %d! = %d\n",n,n,f);
}
