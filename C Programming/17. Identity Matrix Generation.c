//Generate an identity matrix
#include<stdio.h>

int main()
{
    int n,i,j;
    printf("Enter row-column number for square matrix: ");
    scanf("%d",&n);
    //Identity Matrix Generation
    printf("\n%d X %d identity matrix:\n",n,n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
             if(i==j)
                printf("  1");
             else
                printf("  0");
        }
        printf("\n");
    }
    return 0;
}

