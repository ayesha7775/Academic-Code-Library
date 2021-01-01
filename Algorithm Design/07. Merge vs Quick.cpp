#include<bits/stdc++.h>
using namespace std;
int n=10000;

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


void Merge(int arr[], int low, int mid, int high);
void MergeSort(int arr[], int low, int high)
{
    int mid;
    if(low<high){
        mid=(low+high)/2;
        MergeSort(arr,low,mid);
        MergeSort(arr,mid+1,high);
        Merge(arr,low,mid,high);
    }
}

void Merge(int arr[], int low, int mid, int high)
{
    int h=low,i=low,j=mid+1,k,b[high];
    while((h<=mid) && (j<=high)){
      if(arr[h]<=arr[j]){
        b[i]=arr[h];
        ++h;
      }
      else{
        b[i]=arr[j];
        ++j;
      }
      ++i;
    }

    if(h>mid){
        for(k=j;k<=high;++k){
            b[i]=arr[k];
            ++i;
        }
    }
    else{
        for(k=h;k<=mid;++k){
            b[i]=arr[k];
            ++i;
        }
    }
    for(k=low;k<=high;++k){
        arr[k]=b[k];
    }
}

int main()
{
    clock_t start,stop;
    int arr[n];
    for(int i=0;i<n;arr[i]=rand(),i++)
    start=clock();
    QuickSort(arr,0,n-1);
    stop=clock();
    double time1=((double)(stop-start))/CLOCKS_PER_SEC;
    cout<<"For "<<n<<" elements "<<endl<<"Quick Sort: "<<time1<<" seconds"<<endl;
    start=clock();
    MergeSort(arr,0,n-1);
    stop=clock();
    double time2=((double)(stop-start))/CLOCKS_PER_SEC;
    cout<<"Merge Sort: "<<time2<<" seconds"<<endl;
    if(time2>time1)
        cout<<"\nQuick sort is "<<(time2-time1)<<" seconds faster than Merge sort."<<endl;
    else if(time1>time2)
        cout<<"\nMerge sort is "<<(time1-time2)<<" seconds faster than Quick sort."<<endl;
    else
        cout<<"Time complexity is same"<<endl;
    return 0;
}

