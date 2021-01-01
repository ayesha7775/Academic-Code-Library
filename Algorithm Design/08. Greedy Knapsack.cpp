#include<bits/stdc++.h>
using namespace std;

float prft[100000],x[100000],total=0.0,avgprft[10000];

void greedyKnapsack(int n,int m,int p[],int w[])
{
    int i,u=m;
    for(i=1;i<=n;++i){
        if(w[i]>u)
            break;
        x[i]=1.0;
        u-=w[i];
        prft[i]=p[i];
    }
    if(i<=n){
        x[i]=u/(float)w[i];
        prft[i]=(p[i]/(float)w[i])*u;
    }
    for(i=1;i<=n;++i){
        cout<<"\nProduct unit: "<<x[i]<<" (profit per weight "<<avgprft[i]<<")";
        cout<<"\nProfit in "<<x[i]<<" unit(weight "<<w[i]*x[i]<<"): "<<prft[i];
        total+=prft[i];
        cout<<endl;
    }
    cout<<"\nTotal profit: "<<total<<endl;
}

int main()
{
    int n,m,i,j;
    cout<<"Enter the maximum number of product: ";
    cin>>n;
    cout<<"Enter the maximum weight of total product: ";
    cin>>m;
    int p[n+2],w[n+2];
    cout<<"\nEnter the profit for each product: ";
    for(int i=1;i<=n;++i)
        cin>>p[i];
    cout<<"\nEnter the weight for each product respectively: ";
    for(int i=1;i<=n;++i){
        cin>>w[i];
        avgprft[i]=p[i]/(float)w[i];
    }
    for(i=1;i<n;++i){
        for(j=1;j<=n-i;++j){
            if(avgprft[j]<avgprft[j+1]){
                swap(p[j],p[j+1]);
                swap(w[j],w[j+1]);
                swap(avgprft[j],avgprft[j+1]);
            }
        }
    }
    greedyKnapsack(n,m,p,w);
    return 0;
}
