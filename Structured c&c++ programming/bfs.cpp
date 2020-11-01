#include<iostream>
using namespace std;

int bfs (int source,int n,<vector><int>)
{
    bool isvisited [n];
    memset (isvisited,false,sizeof(isvisited));
    queue <int> q;
    q.push(source);
    isvisited[source]==true;
    while(!q.empty())
    {
        int u=q.pop();
        isvisited[u]==true;
        cout<<u<<endl;

        for(int i=0;i<adj[u].size();i++)
        {
            int v=adj[u][i];
            if(isvisited[v]==false)
            {
                q.push(v);
            }
        }

    }
}
int main()
{
    int num_nodes;
    cin>>num_nodes;
    int num_edges;
    cin>>num_edges;

    vector <int>adj[num_nodes];
    for(int i=0;i<num_edges;i++)
    {
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }




    bfs(0,num_nodes,adj);






}

