#include<bits/stdc++.h>
using namespace std;

#define forn(i,j,n) for(int i =j; i<n; i++)
#define ll long long
#define all(v)  v.begin() , v.end()
#define vi(v,n) vector<int> v(n)
#define str string
#define fora(e,v) for(auto &e :v)
#define endl "\n"

bool checkCycle(int &node , vector<int> adj[] , vector<bool> &visited)
{
	queue<pair<int ,int>> q;
	visited[node]=true;
	q.push({node,-1});
	while(!q.empty())
	{
		int nod = q.front().first;
		int prev = q.front().second;
		q.pop();
		for(auto &it:adj[nod])
		{
			if(!visited[it])
			{
				visited[it]=true;
				q.push({it,nod});
			}
			else
			{
				if(it!=prev)
					return true;
			}
		}
	}
	return false;
}


int main()
{		
	
	int nodes , edges;
	cin >> nodes >> edges;
	vector<int> adj[nodes+1];
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
		{
			if(checkCycle(i , adj,visited))
			{
				cout << "true";
				return 0;
			}
		}
	}
	cout << "false" ;
}
