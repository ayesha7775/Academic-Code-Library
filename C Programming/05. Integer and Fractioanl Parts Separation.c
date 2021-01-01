//Separate the integer and fractional part of a decimal number
#include<stdio.h>

int main()
{
    float n,frac_part;
    int int_part;
    printf("Enter a floating-point number: ");
    scanf("%f",&n);
    //Separating integer and fractional part from a float number
    int_part=(int)(n);
    frac_part=n-int_part;
    printf("\n\tInteger part: %d\n\tFractional part: %f\n",int_part,frac_part);
    return 0;
}
