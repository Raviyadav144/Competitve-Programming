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

vector<int>adj[100001*2];
vector<bool>visited(100001*2,false);
vector<int>parent(100001*2,-1);
void dfs(int node)
{
    cout << node << " ";
    visited[node]= true;
   
    for(auto &it:adj[node])
    {  
        if(!visited[it])
        {   if(parent[it]==-1)
                parent[it] = node;
            dfs(it);
            cout << parent[it] << " ";
        }
        
    }

}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    for(int i=0;i<n-1;++i)
    {
        int u , v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    forn(i,1,n+1)
    {
        sort(all(adj[i]));
    }

    dfs(1);
    cout << endl;
}

