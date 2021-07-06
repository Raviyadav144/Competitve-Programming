#include<bits/stdc++.h>
using namespace std;

#define forn(i,j,n) for(int i =j; i<n; i++)
#define ll long long
#define all(v)  v.begin() , v.end()
#define vi(v,n) vector<int> v(n)
#define str string
#define fora(e,v) for(auto &e :v)
#define endl "\n"

vector<int> shortPath(vector<int>adj[],int nodes,int source)
{
    vector<int> path (nodes,INT_MAX);
    queue<int> q;
    q.push(source);
    path[source]=0;
    while(!q.empty())
    {
        int node = q.front();
        q.pop();
        for(auto &it:adj[node])
        {
            if(path[node]+1 < path[it])
            {
                path[it] = path[node]+1;
                q.push(it);
            }
        }
    }
    return path;

}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int nodes , edges , source;
    cin >> nodes >> edges >> source;
    vector<int> adj[nodes+1];
    while(edges--)
    {
        int u,v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);

    }
    
    vector<int> shortestPath = shortPath(adj,nodes,source);
    fora(e,shortestPath)
    cout << e << " ";

   
}

