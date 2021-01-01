//Find the roots of the equation ax2+bx+c=0
#include<stdio.h>
#include<math.h>

int main()
{
    float a,b,c,d,m,n;
    printf("Enter coefficients a, b and c: ");
    scanf("%f %f %f",&a,&b,&c);
    d=b*b-4*a*c;
    printf("Discriminant is: %f",d);
    m=-b/(float)(2*a);
    //Real and equal roots
    if(d==0)
    {
        printf("\nUnique root:\n\troot1 = root2 = %.2f\n",m);
    }
    //Real and different roots
    else if(d>0)
    {
        n=((sqrt)(d))/(float)(2*a);
        printf("\nReal roots are:\n\troot1 = %.2f",m+n);
        printf("\n\troot2 = %.2f\n",m-n);
    }
    //Imaginary roots
    else
    {
        d=d*(-1);
        n=((sqrt)(d))/(float)(2*a);
        printf("\nImaginary roots are:\n\troot1 = %.2f + %.2fi",m,n);
        printf("\n\troot2 = %.2f - %.2fi\n",m,n);
    }
    return 0;

}
