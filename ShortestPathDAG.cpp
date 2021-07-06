#include<bits/stdc++.h>
using namespace std;

#define forn(i,j,n) for(int i =j; i<n; i++)
#define ll long long
#define all(v)  v.begin() , v.end()
#define vi(v,n) vector<int> v(n)
#define str string
#define fora(e,v) for(auto &e :v)
#define endl "\n"
// Shortest Path in a Directed Weighted Graph

void toposort(vector<pair<int,int>> adj[],int &node,vector<bool> &visited,stack<int> &st)
{
    visited[node] = true;
    for(auto &it : adj[node])
    {
        if(!visited[it.first])
            toposort(adj,it.first,visited,st);

    }
    st.push(node);
    
}

vector<int> shortestPath(int &nodes, vector<pair<int,int>> adj[],stack<int> &st,int &source)
{
    vector <int> shortPath(nodes,INT_MAX);
    shortPath[source] = 0;

    while(!st.empty())
    {
        int node = st.top();
        st.pop();
        if(shortPath[node]!=INT_MAX)
        {
            for(auto &it : adj[node])
            {
                if(shortPath[node]+it.second < shortPath[it.first])
                    shortPath[it.first]=shortPath[node]+it.second;
            }
        }

    }
    return shortPath;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int nodes , edges , source;
    cin >> nodes >> edges >> source;
    vector<pair<int,int>> adj[nodes];
    while(edges--)
    {
        int u,v,wt;
        cin >> u >> v >> wt;
        adj[u].push_back({v,wt});
       

    }
    vector<bool>visited(nodes,false);
    
    stack<int> st;
    for(int i=0;i<nodes;i++)
    {
        if(!visited[i])
            toposort(adj,i,visited,st);

    }
    vector<int> shortpath = shortestPath(nodes,adj,st,source);

    fora(e,shortpath)
    cout << e << " ";

   
}

