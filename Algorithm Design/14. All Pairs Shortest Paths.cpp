#include<bits/stdc++.h>
using namespace std;

int n,i,j,k;
int cost[9][9],arr[9][9];

void allpaths()
{
    for(i=1;i<=n;++i)
        for(j=1;j<=n;j++)
            arr[i][j]=cost[i][j];
    for(k=1;k<=n;k++){
        for(i=1;i<=n;i++)
            for(j=1;j<=n;j++)
                arr[i][j]=min(arr[i][j],(arr[i][k]+arr[k][j]));
        cout<<"A^"<<k<<":"<<endl;
        for(i=1;i<=n;i++){
            cout<<"\t";
            for(j=1;j<=n;j++){
                cout<<"  ";
                if(arr[i][j]==999)
                    cout<<"INF   ";
                else
                    cout<<arr[i][j]<<"    ";
            }
            cout<<"\n";
        }
    }
}
int main()
{
    cout<<"\n\t Implementation of All Pairs Shortest Path Algorithm\n";
    cout<<"\t=====================================================";
    cout<<"\n\nEnter the number of nodes: ";
    cin>>n;
    cout<<"\nEnter the cost adjacency matrix: ";
    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++)
           cin>>cost[i][j];
    cout<<endl;
    cout<<"A^0:\n";
    for(i=1;i<=n;i++){
        cout<<"\t";
        for(j=1;j<=n;j++){
            if(cost[i][j]==999)
                cout<<"INF   ";
            else
                cout<<cost[i][j]<<"     ";
        }
        cout<<"\n";
    }
    allpaths();
    return 0;
}
