#include<bits/stdc++.h>
using namespace std;

int i,j,k,n,u,s,ne=1,minn=999;
int cost[9][9],dist[9],visited[9];

void dijkstra()
{
    for(i=1;i<=n;i++){
        visited[i]=0;
        dist[i]=cost[s][i];
    }
    visited[s]=1;
    dist[s]=0;
    while(ne<n){
        minn=999;
        for(i=1;i<=n;i++)
            if(!visited[i] && dist[i]<minn){
                minn=dist[i];
                u=i;
            }
        visited[u]=1;
        for(k=1;k<=n;k++){
            if(!visited[k] && dist[k]>dist[u]+cost[u][k])
                dist[k]=dist[u]+cost[u][k];
        }
        ne++;
    }
    for (i=1; i<=n;i++)
        if (i!=s)
            printf("\nDistance from source to %d: %d", i, dist[i]);
}
int main()
{
    cout<<"\n\t Implementation of SSSP Algorithm or Dijkstra Algorithm\n";
    cout<<"\t========================================================";
    cout<<"\n\nEnter the number of nodes:";
    cin>>n;
    cout<<"\nEnter the cost adjacency matrix:\n";
    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++){
           cin>>cost[i][j];
            if(cost[i][j]==0)
                cost[i][j]=999;
        }
    cout<<"Enter the source node: ";
    cin>>s;
    dijkstra();
    return 0;
}
