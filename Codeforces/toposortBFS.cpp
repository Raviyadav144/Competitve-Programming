#include<bits/stdc++.h>
using namespace std;

#define forn(i,j,n) for(int i =j; i<n; i++)
#define ll long long
#define all(v)  v.begin() , v.end()
#define vi(v,n) vector<int> v(n)
#define str string
#define fora(e,v) for(auto &e :v)
#define endl "\n"

vector<int> toposortBFS(int nodes,vector<int> adj[])
{
    vector<int> inDegree(nodes+1,0);
    for(int i=1;i<=nodes;i++)
    {
        for(auto &it : adj[i])
        {
            inDegree[it]++;
        }
    }

    queue<int> q;
    for(int i=1;i<=nodes;i++)
    {
        if(inDegree[i]==0)
        {
            q.push(i);
        }
    }

    vector<int> topo;
    while(!q.empty())
    {
        int node = q.front();
        q.pop();
        topo.push_back(node);
        for(auto &it : adj[node])
        {
            inDegree[it]--;
            if(inDegree[it]==0)
                q.push(it);
        }
    }
    return topo;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int nodes , edges;
    cin >> nodes >> edges;
    vector<int> adj[nodes+1];
    while(edges--)
    {
        int u,v;
        cin >> u >> v;
        adj[u].push_back(v);

    }
    vector<int> topo = toposortBFS(nodes,adj);
    fora(e,topo)
    cout << e << " ";


   
}

