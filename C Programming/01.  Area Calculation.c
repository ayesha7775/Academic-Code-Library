//Calculate the area of a circle
#include<stdio.h>
#define PI 3.1416

int main()
{
    float r,a;
    printf("Enter radius: ");
    scanf("%f",&r);
    //Formula of calculating the area of a circle
    a=PI*r*r;
    printf("\nArea of the circle: %.2f\n",a);
    return 0;
}
