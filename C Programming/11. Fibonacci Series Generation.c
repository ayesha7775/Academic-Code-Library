//Generate the Fibonacci series
# include <stdio.h>

int main()
{
    int a=-1,b=1,i,n,c;
    printf("Enter the number of terms: ");
    scanf("%d",&n);
    //Fibonacci Series 0 1 1 2 3 5 8....
    for(i=0;i<n;i++)
    {
        c=a+b;
        printf("%3d",c);
        a=b;
        b=c;
    }
    return 0;
}
