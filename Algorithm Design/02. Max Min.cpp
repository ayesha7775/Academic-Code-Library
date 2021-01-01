#include<bits/stdc++.h>
using namespace std;

void MaxMin(int arr[], int low, int high, int &maxx, int &minn)
{
    int mid,max1,min1;
    if(low==high){
        maxx=minn=arr[low];
    }
    else if(low==high-1){
        if(arr[low]>arr[high]){
            maxx=arr[low];
            minn=arr[high];
        }
        else{
            maxx=arr[high];
            minn=arr[low];
        }
    }
    else{
        mid=(low+high)/2;
        MaxMin(arr,low,mid,maxx,minn);
        MaxMin(arr,mid+1,high,max1,min1);
        if(maxx<max1) maxx=max1;
        if(minn>min1) minn=min1;
    }
}

int main()
{
    int n,i,maxx,minn;
    cout<<"Enter the number of elements in the array: ";
    cin>>n;
    cout<<endl;
    int arr[n],low=0,high=n-1;
    cout<<"Enter the elements of the array: ";
    for(i=0;i<n;i++)
        cin>>arr[i];
    cout<<endl;
    MaxMin(arr,low,high,maxx,minn);
    cout<<"Maximum value of the array is: "<<maxx<<endl;
    cout<<"Minimum value of the array is: "<<minn<<endl;
    return 0;
}
