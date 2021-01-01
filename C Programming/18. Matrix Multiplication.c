//Calculate the multiplication of two matrix
#include<stdio.h>

int main()
{
    int r1,c1,r2,c2,i,j,k,a[10][10],b[10][10],m[10][10]={0};
    printf("Enter the number of rows and columns in matrix A: ");
    scanf("%d %d",&r1,&c1);
    printf("\nEnter the matrix elements: ");
    for(i=0;i<r1;i++)
        for(j=0;j<c1;j++)
            scanf("%d",&a[i][j]);
    printf("Enter the number of rows and columns in matrix B: ");
    scanf("%d %d",&r2,&c2);
    printf("\nEnter the matrix elements: ");
    for(i=0;i<r2;i++)
        for(j=0;j<c2;j++)
            scanf("%d",&b[i][j]);
    printf("\nMatrix A:\n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
            printf("%5d",a[i][j]);
        printf("\n");
    }
    printf("\nMatrix B:\n");
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
            printf("%5d",b[i][j]);
        printf("\n");
    }
    //Matrix Multiplication
    if(c1==r2)
    {
        printf("\nProduct of matrix A and matrix B is:\n");
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c2;j++)
            {
                for(k=0;k<r2;k++)
                    m[i][j]+=a[i][k]*b[k][j];
                printf("%5d",m[i][j]);
            }
            printf("\n");
        }
    }
    else
        printf("\nMultiplication is not possible.\n");
    return 0;
}
