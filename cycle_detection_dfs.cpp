#include<bits/stdc++.h>
using namespace std;

#define forn(i,j,n) for(int i =j; i<n; i++)
#define ll long long
#define all(v)  v.begin() , v.end()
#define vi(v,n) vector<int> v(n)
#define str string
#define fora(e,v) for(auto &e :v)
#define endl "\n"

bool cycleCheck(int node , int pre , vector<int> adj[],vector<bool> &visited)
{
	visited[node]=true;
	for(auto &it: adj[node])
	{
		if(!visited[it])
		{	
			if(cycleCheck(it , node,adj,visited))
				return true;
		}
		else
		{
			if(it!=pre)
				return true;
		}
	}
	return false;
}



int main()
{		
	int nodes , edges;
	cin >> nodes >> edges;
	vector <int> adj[nodes+1];
	vector<bool> visited(nodes+1,false);
	while(edges--)
	{
		int u , v;
		cin >> u >> v;
		adj[u].push_back(v);
		adj[v].push_back(u);

	}
	for(int i=1;i<=nodes;i++)
	{
		if(!visited[i])
			if(cycleCheck(i,-1,adj,visited))
			{
				cout << "true" ;
				return 0;
			}
	}
	cout << "false";

}