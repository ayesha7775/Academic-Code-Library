//Inventory using file
#include<stdio.h>

int main()
{
    FILE *fp;
    int id,quantity,i;
    float price,value;
    char item[10],filename[10];
    printf("Input file name: ");
    scanf("%s",filename);
    fp=fopen(filename,"w");
    printf("Input inventory data for three items:\n");
    printf("Item name, Id, price per kg, quantity in kg: ");
    for(i=1;i<=3;i++)
    {
        scanf("%s %d %f %d",item,&id,&price,&quantity);
        fprintf(fp,"%s %d %.2f %d\n",item,id,price,quantity);
    }
    fclose(fp);
    fprintf(stdout,"\n");
    fp=fopen(filename,"r");
    printf("Item-name id Price/kg Quantity,kg\tValue\n");
    for(i=1;i<=3;i++)
    {
        fscanf(fp,"%s %d %f %d",item,&id,&price,&quantity);
        value=price*quantity;
        fprintf(stdout,"%-8s %7d %8.2f %8d %11.2f\n",item,id,price,quantity,value);
    }
    fclose(fp);

    return 0;
}
