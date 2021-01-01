#include<bits/stdc++.h>
using namespace std;

int n,e,s,a,b,i;
bool visited[10]={false};
vector<vector<int> >g;

void bfs(int s)
{
    queue<int>q;
    q.push(s);
    visited[s]=true;
    cout<<"The BFS traversal is: ";
    while (!q.empty()){
        a=q.front();
        q.pop();
        for(i=0;i<g[a].size();i++){
            if (!visited[g[a][i]]){
                visited[g[a][i]]=true;
                q.push(g[a][i]);
            }
        }
        cout<<a<<"  ";
    }
}

int main()
{
    cout<<"\t Implementation of Breadth First Search Algorithm\n";
    cout<<"\t==================================================\n\n";
    cout<<"Enter the number of vertices: ";
    cin>>n;
    g.assign(n+1, vector<int>());
    cout<<"Enter the number of edges: ";
    cin>>e;
    cout<<"Enter the edges with source->target vertex: \n";
    for(i=0;i<e;i++){
        cin>>a>>b;
        g[a].push_back(b);
    }
    cout<<"Enter the source vertex: ";
    cin>>s;
    bfs(s);
    return 0;
}
