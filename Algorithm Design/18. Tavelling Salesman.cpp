#include<bits/stdc++.h>
using namespace std;

int n,s,i,j,mincost=999,cost[10][10];

void tsp()
{
    vector<int>v;
    for(i=1;i<=n;i++)
        if (i!=s)
            v.push_back(i);
    do{
        int current_pathweight=0,k=s;
        for(i=0;i<v.size();i++){
            current_pathweight+=cost[k][v[i]];
            k=v[i];
		}
        current_pathweight+=cost[k][s];
        mincost=min(mincost, current_pathweight);
    }while(next_permutation(v.begin(), v.end()));

    cout<<"Minimum cost: "<<mincost;
}

int main()
{
    cout<<"\n\t Implementation of Traveling Salesman Problem\n";
    cout<<"\t==============================================";
    cout<<"\n\nEnter the number of nodes:";
    cin>>n;
    cout<<"\nEnter the cost adjacency matrix:\n";
    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++)
            cin>>cost[i][j];
	cout<<"Enter the source vertex: ";
    cin>>s;
    tsp();
    return 0;
}
