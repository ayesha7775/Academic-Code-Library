#include<bits/stdc++.h>
using namespace std;

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

int main(){
    int n,i;
    cout<<"Enter the number of elements in the array: ";
    cin>>n;
    int arr[n],p=0,r=n-1;
    cout<<"\nEnter the elements of the array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    QuickSort(arr,p,r);
    cout<<"\nSorted array in ascending order: ";
    for(i=0;i<n;i++)
        cout<<arr[i]<<"   ";
        cout<<endl;
    return 0;
}
