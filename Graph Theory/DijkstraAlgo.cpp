#include<bits/stdc++.h>
using namespace std;

#define forn(i,j,n) for(int i =j; i<n; i++)
#define ll long long
#define all(v)  v.begin() , v.end()
#define vi(v,n) vector<int> v(n)
#define str string
#define fora(e,v) for(auto &e :v)
#define endl "\n"
// Shortest Path in a Unirected Weighted Graph // Dijkstra's Algorithm

vector<int> dijkstra(vector<pair<int,int>> adj[],int &source, int &nodes)
{
    vector<int> shortpath(nodes+1,INT_MAX);
    shortpath[source] = 0;

    priority_queue<pair<int,int>, vector<pair<int,int>>,greater<pair<int,int>>> pq;
    pq.push({0,source});

    while(!pq.empty())
    {
        int dist = pq.top().first;
        int prev = pq.top().second;
        pq.pop();
        for(auto &it : adj[prev])
        {
            int next = it.first;
            int nextDis = it.second;
            if(dist + nextDis < shortpath[next])
            {
                shortpath[next] = dist + nextDis;
                pq.push({shortpath[next],next});
            }
        }
    }
    return shortpath;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int nodes , edges , source;
    cin >> nodes >> edges >> source;
    vector<pair<int,int>> adj[nodes+1];
    while(edges--)
    {
        int u,v,wt;
        cin >> u >> v >> wt;
        adj[u].push_back({v,wt});
        adj[v].push_back({u,wt});
   
    }
    vector<int> shortPath = dijkstra(adj,source,nodes);
    fora(e,shortPath)
    cout << e << " ";
   

   
}

