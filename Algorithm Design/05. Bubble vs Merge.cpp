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
    BubbleSort(arr,n);
    stop=clock();
    double time1=((double)(stop-start))/CLOCKS_PER_SEC;
    cout<<"For "<<n<<" elements "<<endl<<"Bubble Sort: "<<time1<<" seconds"<<endl;
    start=clock();
    MergeSort(arr,0,n-1);
    stop=clock();
    double time2=((double)(stop-start))/CLOCKS_PER_SEC;
    cout<<"Merge Sort: "<<time2<<" seconds"<<endl;
    cout<<"\nMerge sort is "<<(time1-time2)<<" seconds faster than Bubble sort."<<endl;
    return 0;
}
