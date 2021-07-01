#include<bits/stdc++.h>
using namespace std;

#define forn(i,j,n) for(int i =j; i<n; i++)
#define ll long long
#define all(v)  v.begin() , v.end()
#define vi(v,n) vector<int> v(n)
#define str string
#define fora(e,v) for(auto &e :v)
#define endl "\n"

bool BipartiteDFS(int node,vector<int> adj[],vector <int> &color)
{
    if(color[node]==-1)
        color[node]=1;
    for(auto &e: adj[node])
    {
        if(color[e]==-1)
        {
            color[e]=1-color[node];
            if(!BipartiteDFS(e,adj,color))
                return false;
        }
        else if(color[node]==color[e])
            return false;

    }
    return true;
}

ll BipartiteCheck(int stu,vector<int> adj[],vector<int> &color)
{   
    ll count =0;
    for(int i=1;i<=stu;++i)
    {
        if(color[i]==-1)
        {
            if(!BipartiteDFS(i,adj,color))
                count++;
        }
    }
    return count;
}
int main()
{
    ios::sync_with_stdio(false);
   cin.tie(0);
   int students , enemies;
   cin >> students >> enemies;
   vector<int> adj[students+1];
   vector<int> color(students+1,-1);
   while(enemies--)
   {
      int u , v;
      cin >> u >> v;
      adj[u].push_back(v);
      adj[v].push_back(u);
   }

   ll ans = BipartiteCheck(students,adj,color);
   if((students-ans)&1)
        ans++;
    cout << ans << endl;

        


}

