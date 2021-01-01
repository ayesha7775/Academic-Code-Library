#include<bits/stdc++.h>
using namespace std;

int a,b,u,v,n,i,j,ne=1;
int visited[10]={0},minn,mincost=0,cost[10][10];

void prim()
{
    visited[1]=1;
    printf("\nThe edges of Minimum Cost Spanning Tree are:\n\n");
    while(ne<n)
    {
        for(i=1,minn=999;i<=n;i++)
            for(j=1;j<=n;j++)
                if(cost[i][j]<minn)
                    if(visited[i]!=0){
                        minn=cost[i][j];
                        a=u=i;
                        b=v=j;
                   }
        if(visited[u]==0 || visited[v]==0){
            printf("\nE%d: (%d %d) cost: %d",ne++,a,b,minn);
            mincost+=minn;
            visited[b]=1;
        }
        cost[a][b]=cost[b][a]=999;
    }
    printf("\nMinimum cost = %d\n",mincost);
}

int main()
{
    cout<<"\n\t Implementation of Prim's Algorithm\n";
    cout<<"\t====================================\n";
    cout<<"\nEnter the number of nodes:";
    cin>>n;
    cout<<"\nEnter the cost adjacency matrix:\n";
    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++){
            cin>>cost[i][j];
            if(cost[i][j]==0)
                cost[i][j]=999;
        }
    prim();
    return 0;
}
