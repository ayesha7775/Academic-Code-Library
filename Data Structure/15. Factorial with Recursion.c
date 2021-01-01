//Calculate factorial of a given number
#include<stdio.h>

long long factorial(int n){
    if(n==0 || n==1)
        return 1;
    else
        return n*factorial(n-1);
}

int main()
{
    int n;
    printf("\nEnter a natural number for factorial: ");
    scanf("%d",&n);
    printf("\n\t%d! = %lld\n", n, factorial(n));
    return 0;
}
