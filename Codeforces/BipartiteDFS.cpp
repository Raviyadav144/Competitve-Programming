#include<bits/stdc++.h>
using namespace std;

#define forn(i,j,n) for(int i =j; i<n; i++)
#define ll long long
#define all(v)  v.begin() , v.end()
#define vi(v,n) vector<int> v(n)
#define str string
#define fora(e,v) for(auto &e :v)
#define endl "\n"

bool bipartiteDFS(vector<int> adj[],vector<int> &color , int node)
{
	if(color[node]==-1)
		color[node]=1;
		for(auto &it : adj[node])
		{
			if(color[it]==-1)
			{
				color[it]=1-color[node];
				if(!bipartiteDFS(adj,color,it))
					return false;
			}
			else if(color[it]==color[node])
				return false;
		}
		return true;
}

bool checkBipartite(int n,vector<int> adj[],vector<int> &color)
{
	for(int i=1;i<=n;i++)
	{
		if(color[i]==-1)
		{
			if(!bipartiteDFS(adj,color,i))
				return false;
		}
	}
	return true;
}


int main()
{		
	
	int nodes , edges;
	cin >> nodes >> edges;
	vector <int> adj[nodes+1];
	vector <int> color(nodes+1,-1);
	while(edges--)
	{
		int u ,v;
		cin >> u >> v;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}
	
	if(checkBipartite(nodes,adj,color))
		cout << "true";
	else
		cout << "false";
	

}