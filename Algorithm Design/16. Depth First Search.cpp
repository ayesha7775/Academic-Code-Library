#include<bits/stdc++.h>
using namespace std;

int n,e,s,a,b,i;
bool visited[10]={false};
vector<vector<int> >g;

void dfs(int s)
{
    stack<int>st;
    st.push(s);
    visited[s]=true;
    cout<<"The DFS traversal is: ";
    while(!st.empty()){
        a=st.top();
        st.pop();
        for(i=g[a].size();i>0;i<i--){
            if (!visited[g[a][i-1]]){
                visited[g[a][i-1]]=true;
                st.push(g[a][i-1]);
            }
        }
        cout<<a<<"  ";
    }
}

int main()
{
    cout<<"\t Implementation of Depth First Search Algorithm\n";
    cout<<"\t================================================ \n\n";
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
    dfs(s);
    return 0;
}
