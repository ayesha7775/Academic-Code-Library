#include<bits/stdc++.h>
using namespace std;

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
    int n,i;
    cout<<"Enter the number of elements in the array: ";
    cin>>n;
    int arr[n],low=0,high=n-1;
    cout<<"\nEnter the elements of the array: ";
    for(i=0;i<n;i++)
        cin>>arr[i];
    MergeSort(arr,low,high);
    cout<<"\nSorted array in ascending order: ";
    for(i=0;i<n;i++)
        cout<<arr[i]<<"  ";
    cout<<endl;
    return 0;
}
