#include<bits/stdc++.h>
using namespace std;

int i,j,k,a,b,u,v,n,ne=1;
int minn,mincost=0,cost[9][9],parent[9];
int find(int);
int uni(int,int);

void kruskal()
{
    cout<<"\nThe edges of Minimum Cost Spanning Tree are:\n\n";
    while(ne<n){
        for(i=1,minn=999;i<=n;i++)
            for(j=1;j<=n;j++)
                if(cost[i][j]<minn){
                    minn=cost[i][j];
                    a=u=i;
                    b=v=j;
                }
        u=find(u);
        v=find(v);
        if(uni(u,v)){
            printf("\nE%d: (%d,%d) cost: %d\n",ne++,a,b,minn);
            mincost+=minn;
        }
        cost[a][b]=cost[b][a]=999;
    }
   cout<<"\nMinimum cost = "<<mincost<<endl;
}

int find(int i)
{
    while(parent[i])
        i=parent[i];
    return i;
}
int uni(int i,int j)
{
    if(i!=j){
        parent[j]=i;
        return 1;
    }
    return 0;
}

int main(){
    cout<<"\n\t Implementation of Kruskal's Algorithm\n";
    cout<<"\t=======================================";
    cout<<"\n\nEnter the number of nodes: ";
    cin>>n;
    cout<<"\nEnter the cost adjacency matrix:\n";
    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++){
           cin>>cost[i][j];
            if(cost[i][j]==0)
                cost[i][j]=999;
        }
    kruskal();
    return 0;
}
