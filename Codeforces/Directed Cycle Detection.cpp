#include<bits/stdc++.h>
using namespace std;

#define forn(i,j,n) for(int i =j; i<n; i++)
#define ll long long
#define all(v)  v.begin() , v.end()
#define vi(v,n) vector<int> v(n)
#define str string
#define fora(e,v) for(auto &e :v)
#define endl "\n"

bool checkCycle(int node,vector<int>adj[], vector<bool> &visited, vector<bool> &dfsvisited)
{
    visited[node]=true;
    dfsvisited[node] = true;
    for(auto &it : adj[node])
    {
        if(!visited[it])
        {
            if(checkCycle(it,adj,visited,dfsvisited)) return true;
        }
        else if(dfsvisited[it])
            return true;
    }
    dfsvisited[node]=0;
    return false;
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
    vector<bool> visited(nodes+1,false);
    vector<bool> dfsvisited(nodes+1,false);
    bool el =false;
    for(int i=1;i<=nodes;i++)
    {
        if(!visited[i])
        {
            if(checkCycle(i,adj,visited,dfsvisited))
            {
                cout << "Cycle Detected" << endl;
                el = true;
                 break;
            }
           
        }
    }
    if(!el)
        cout << "No cycle Found" << endl;
    


   
}

