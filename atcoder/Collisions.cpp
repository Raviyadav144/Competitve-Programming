#include<bits/stdc++.h>
using namespace std;

#define forn(i,j,n) for(int i =j; i<n; i++)
#define ll long long
#define all(v)  v.begin() , v.end()
#define vi(v,n) vector<int> v(n)
#define str string
#define fora(e,v) for(auto &e :v)
#define endl "\n"
#define pi acos(-1.0)

vector<int> bfs(vector<int>adj[],int &nodes)
{
    vector<int> color(nodes+1,-1);
    queue<int>q;
    q.push(1);
    color[1]=1;
    while(!q.empty())
    {
        int node = q.front();
        
        q.pop();
        for(auto &it : adj[node])
        {
            if(color[it]==-1)
            {
                color[it] = 1-color[node];
                q.push(it);
            }
        }
    }
    return color;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int nodes , queries;
    cin >> nodes >> queries;
    int edges = nodes-1;
    vector<int> adj[nodes+1];
    while(edges--)
    {
        int u , v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    vector <int> color = bfs(adj,nodes);
    while(queries--)
    {
        int c , d;
        cin >> c>> d;
        if(color[c]==color[d])
            cout << "Town" << endl;
        else
            cout << "Road" << endl;
    }
    

    

}

