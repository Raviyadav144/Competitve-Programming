#include<bits/stdc++.h>
using namespace std;

#define forn(i,j,n) for(int i =j; i<n; i++)
#define ll long long
#define all(v)  v.begin() , v.end()
#define vi(v,n) vector<int> v(n)
#define str string
#define fora(e,v) for(auto &e :v)
#define endl "\n"

vector <int> BfsOfGraph(int V, vector<int>adj[])
{
	vector<int> bfs;
	vector<int> visited(V+1,0);
	for(int i=1;i<=V;i++)
	{	if(!visited[i])
		{
		queue<int> q;
		q.push(i);
		visited[i]=1;
		while(!q.empty())
		{
			int node = q.front();
			q.pop();
			bfs.push_back(node);

			for(auto &it :adj[node])
			{	if(!visited[i])
				{
					q.push(it);
					visited[it]=1;
				}
			}
		}
	}
	}
	return bfs;
}


int main()
{		
	int nodes , edges;
	cin >> nodes >> edges;
	vector <int> adj[nodes+1];
	for(int i=0;i<edges;i++)
	{
		int v,u;
		cin >> v >> u;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}

	vector <int> bfs = BfsOfGraph(nodes , adj);
	for(auto &it : bfs)
		cout << it << " ";

}