//Calculate the sum of series x-x^2/2!+x^3/3!-x^4/4!+.....
#include<stdio.h>
#include<math.h>

int factorial(int n)
{
    int f;
    if(n==1)
       return 1;
    else
        f=n*factorial(n-1);
    return f;
}

int main()
{
    int term,x,i,j;
    float sum=0.0;
    printf("Enter the number of terms : ");
    scanf("%d",&term);
    printf("\nEnter the value of x: ");
    scanf("%d",&x);
    //Sum of series x-x^2/2!+x^3/3!-x^4/4!+.....
    for(i=1,j=1;j<=term;i=i+2,j++)
    {
        if(j%2!=0)
           sum+=pow(x,i)/(float)factorial(i);
        else
           sum-=pow(x,i)/(float)factorial(i);
    }
    printf("\nResult: %.3f",sum);
    return 0;
}
