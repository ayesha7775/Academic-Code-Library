#include<bits/stdc++.h>
using namespace std;

int i,j,k,n,s,u,ne=1,cost[9][9],dist[9];

void bellmanford()
{
    for(i=1;i<=n;++i)
        dist[i]=cost[s][i];
    dist[s]=0;
    while(ne<n-1){
        for(u=1;u<=n;u++)
            if(u!=s)
                for(k=1;k<=n;k++)
                    if(dist[k]>dist[u]+cost[u][k])
                        dist[k]=dist[u]+cost[u][k];
        ne++;
    }
    for (i=1; i<=n;i++)
        if (i!=s)
            printf("\nDistance from source to %d: %d", i, dist[i]);
}

int main()
{
    cout<<"\n\t Implementation of SSSP Algorithm or Bellman Ford Algorithm\n";
    cout<<"\t============================================================";
    cout<<"\nEnter the number of nodes:";
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
    bellmanford();
    return 0;
}
