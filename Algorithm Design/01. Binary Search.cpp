#include<bits/stdc++.h>
using namespace std;

int BinSrch(int arr[], int low, int high, int elmnt)
{
    int mid;
    if(low==high){
        if(elmnt==arr[low])
            return low;
        else
            return 0;
    }
    else{
        mid=(low+high)/2;
        if(elmnt==arr[mid])
            return mid;
        else if(elmnt<arr[mid])
            return BinSrch(arr,low,mid-1,elmnt);
        else
            return BinSrch(arr,mid+1,high,elmnt);
    }
}

int main()
{
    int n,i,j,temp,srchElmnt;
    cout<<"Enter the number of elements in the array: ";
    cin>>n;
    cout<<endl;
    int arr[n],low=1,high=n;
    cout<<"Enter the elements of the array: ";
    for(i=1;i<=n;i++)
        cin>>arr[i];
    cout<<endl;
    for(i=1;i<n;++i){
        for(j=1;j<=n-i;++j){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    cout<<"Array elements in Ascending order: ";
    for(i=1;i<=n;i++)
        cout<<arr[i]<<" ";
    cout<<"\n\nEnter the search element: ";
    cin>>srchElmnt;
    cout<<endl;
    int p=BinSrch(arr,low,high,srchElmnt);
    if(p!=0)
        cout<<"Location of the searched element is "<<p<<endl;
    else
        cout<<"Searched element not found"<<endl;
    return 0;
}
