//Generate Fibonacci series
#include<stdio.h>

int fibonacci(int n){
    if(n==0 || n==1)
        return n;
    else
        return fibonacci(n-2)+fibonacci(n-1);
}

int main()
{
    int i,n;
    printf("\nEnter the number of elements in the series: ");
    scanf("%d",&n);
    printf("\nFibonacci series: ");
    for(i=0;i<n;i++){
        printf("%3d",fibonacci(i));
    }
    printf("\n");
    return 0;
}
}
