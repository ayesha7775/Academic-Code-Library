//Calculate the sum of the series 1+1/2^2+1/3^2+1/4^2+.....+1/n^2
# include <stdio.h>
# include <math.h>

int main()
{
    int i,n;
    float sum=0.0;
    printf("Enter the number of terms: ")
    scanf("%d",&n);
    //Calculating the sum of 1+1/2^2+1/3^2+1/4^2+.....+1/n^2 series
    for(i=1;i<=n;i++)
    {
        sum+=1/(float)(pow(i,2));
    }
    printf("Sum of the series: %.3f",sum);
    return 0;
}
