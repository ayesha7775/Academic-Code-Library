//Sort the array using bubble sort method
#include<stdio.h>

void asc_sort(int data[],int n){
        int i,j,temp;
        for(i=1;i<n;++i){
                for(j=1;j<=n-i;++j){
                        if(data[j]>data[j+1]){
                                temp=data[j];
                                data[j]=data[j+1];
                                data[j+1]=temp;
                        }
                }
        }
}

void des_sort(int data[],int n){
        int i,j,temp;
        for(i=1;i<n;++i){
                for(j=1;j<=n-i;++j){
                        if(data[j]<data[j+1]){
                                temp=data[j];
                                data[j]=data[j+1];
                                data[j+1]=temp;
                        }
                }
        }
}

int main()
{
        int i,n,ch,data[100];
        printf("Enter the size of the array: ");
        scanf("%d",&n);
        printf("\nEnter the elements: ");
        for(i=1;i<=n;++i)
                scanf("%d",&data[i]);
        printf("How do you want to sort out:\n1.Ascending Order\n2.Descending Order");
        printf("\nEnter your choice: ");
        scanf("%d",&ch);
        switch(ch){
                case 1:
                        asc_sort(data,n);
                        break;
                case 2:
                        des_sort(data,n);
                        break;
                default:
                        printf("Wrong Choice!!!");
        }
        printf("\nSorted array: ");
        for(i=1;i<=n;++i)
                printf("%5d",data[i]);
        printf("\n");
        return 0;
}
