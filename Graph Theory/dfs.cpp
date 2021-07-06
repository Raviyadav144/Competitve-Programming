#include<bits/stdc++.h>
using namespace std;

#define forn(i,j,n) for(int i =j; i<n; i++)
#define ll long long
#define all(v)  v.begin() , v.end()
#define vi(v,n) vector<int> v(n)
#define str string
#define fora(e,v) for(auto &e :v)

void dfs(int node , vector<int> &dfsg , vector<bool> &visited , vector<int>adj[])
{
	dfsg.push_back(node);
	visited[node]=true;
	for(auto &it:adj[node])
	{
		if(!visited[it])
		dfs(it,dfsg,visited,adj);
	}
}

int main()
{
	int nodes , edges;
	cin >> nodes >> edges;
	vector<int> adj[nodes+1];
	vector<bool> visited(nodes+1,false);
	while(edges--)
	{
		int v , u;
		cin >> v >> u;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}
	vector<int> dfsg;
	for(int i =1;i<=nodes;i++)
	{
		if(!visited[i])
		{
			dfs(i,dfsg,visited,adj);
		}
	}
	for(auto &e:dfsg)
		cout << e << " ";
}