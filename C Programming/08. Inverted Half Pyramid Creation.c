//Make the inverted pyramid of a given number
#include<stdio.h>
//Reverse the number 1234 to 4321
int reverse(int n)
{
    int r=0;
    while(n>0)
    {
        r=r*10+n%10;
        n/=10;
    }
    return r;
}

int main()
{
    int n,r;
    printf("Enter a natural number: ");
    scanf("%d",&n);
//  Inverted half pyramid
//            1234
//            234
//            34
//            4
    r=reverse(n);
    while(r>0)
    {
        printf("%d\n",reverse(r));
        r/=10;
    }
    printf("\n");
    return 0;
}
