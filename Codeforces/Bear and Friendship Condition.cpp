//-----raviyadav144----//
#include<bits/stdc++.h>
using namespace std;

#define forn(i,j,n) for(int i =j; i<n; i++)
#define ll long long
#define all(v)  v.begin() , v.end()
#define vi(v,n) vector<int> v(n)
#define fora(e,v) for(auto &e :v)
#define endl "\n"
#define pi acos(-1.0)
#define mod 1000000007


bool friends(vector<vector<int>>&adj,int node,vector<bool>&visited)
{   
    visited[node] = true;
    
    for(auto &it:adj[node])
    {  
        visited[it] = true;
    }
    for(auto &it :adj[node])
    {  
        for(auto &it1:adj[it])
        {   
            if(visited[it1]==false)
                return false;
        }
    }

    return true;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n , m;
    cin >> n >> m;
    vector<vector<int>>adj(n+1);
    while(m--)
    {
        int u , v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    
   
    for(int i =1;i<=n;++i)
    {   vector<bool>visited(n+1,false);
        if(!friends(adj,i,visited))
        {   
            cout << "NO" << endl;
            return 0;
        }
        
    }
    cout << "YES" << endl;
}
    

