#include<bits/stdc++.h>
using namespace std;
vector <int> adj[10];
bool visited[10];
// This is a function
void dfs(int i)
{
    visited[i]=true;
    for(int j=0;j<adj[i].size();j++)
    {
        if(visited[adj[i][j]]==false)
            dfs(adj[i][j]);
    }
}
int main()
{
    int nodes,edges,conncomp=0,x,y,i;
    cin>>nodes>>edges;
    for(i=0;i<edges;i++)
    {
        cin>>x>>y;
        adj[x].push_back(y);

    }
    for(i=0;i<nodes;i++)
        visited[i]=false;
        for(i=1;i<=nodes;i++)
        {
            if(visited[i]==false)
            {
                dfs(i);
                conncomp++;
            }
        }
        cout<<"connected components"<<conncomp;
        return 0;
}
