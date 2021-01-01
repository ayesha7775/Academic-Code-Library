//Convert the temperature from cel to fah and vice versa
# include<stdio.h>

int main()
{
    float c,f;
    //Temperature conversion from celsius to fahrenheit
    printf("Enter celsius value: ");
    scanf("%f",&c);
    f=1.8*c+32;
    printf("In fahrenheit: %.2f",f);
    //Temperature conversion from fahrenheit to celsius
    printf("\n\nEnter fahrenheit value: ");
    scanf("%f",&f);
    c=(f-32)/(float)1.8;
    printf("In celsius: %.2f\n",c);
    return 0;
}
