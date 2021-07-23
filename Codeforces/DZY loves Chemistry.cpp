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

ll danger =1;

bool check = false;

void dfs(int i , vector<int>adj[],vector<bool>&visited)
{
    if(check)
        danger*=(ll)2;
    else
        check = true;
    visited[i] =true;
    for(auto &it : adj[i])
    {
        if(!visited[it])
            dfs(it,adj,visited);
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n , m;
    cin >> n >> m;
    vector<bool> visited(n,false);
    vector<int> adj[n+1];
    while(m--)
    {
        int u , v;
        cin >> u >> v;
        adj[v].push_back(u);
        adj[u].push_back(v);
    }

    for(int i =1;i<=n;i++)
    {
        if(!visited[i])
        {
            dfs(i,adj,visited);
            check = false;
        }
    }
    cout <<danger << endl;

}

