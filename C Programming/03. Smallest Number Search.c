//Find the smallest number among three number
#include<stdio.h>

int main()
{
    int a,b,c,min;
    printf("Enter three number: ");
    scanf("%d %d %d",&a,&b,&c);
    //Search conditions for minimum number among three numbers
    if(a<b && a<c) min=a;
    else if(b<a && b<c) min=b;
    else min=c;
    printf("\nSmallest number is: %d\n",min);
    return 0;
}
