#include<bits/stdc++.h>
using namespace std;
int n=10000;

void BubbleSort(int arr[], int n)
{
    int i,j,temp;
    for(i=0;i<n-1;++i){
        for(j=0;j<n-i-1;++j){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}


int Partition(int arr[], int p, int r);
void QuickSort(int arr[], int p, int r)
{
    if(p<r)
    {
        int q;
        q=Partition(arr,p,r);
        QuickSort(arr,p,q-1);
        QuickSort(arr,q+1,r);
    }
}

int Partition(int arr[], int p, int r)
{
    int x,i,j,temp;
    x=arr[p];
    i=r+1;
    for(j=r;j>=p+1;--j){
        if(arr[j]>=x){
            i=i-1;
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
     temp=arr[i-1];
     arr[i-1]=arr[p];
     arr[p]=temp;
     return i-1;
}


int main()
{
    clock_t start,stop;
    int arr[n];
    for(int i=0;i<n;arr[i]=rand(),i++)
    start=clock();
    BubbleSort(arr,n);
    stop=clock();
    double time1=((double)(stop-start))/CLOCKS_PER_SEC;
    cout<<"For "<<n<<" elements "<<endl<<"Bubble Sort: "<<time1<<" seconds"<<endl;
    start=clock();
    QuickSort(arr,0,n-1);
    stop=clock();
    double time2=((double)(stop-start))/CLOCKS_PER_SEC;
    cout<<"Quick Sort: "<<time2<<" seconds"<<endl;
    cout<<"\nQuick sort is "<<(time1-time2)<<" seconds faster than Bubble sort."<<endl;
    return 0;
}
