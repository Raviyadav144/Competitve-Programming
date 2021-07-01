#include<bits/stdc++.h>
using namespace std;

#define forn(i,j,n) for(int i =j; i<n; i++)
#define ll long long
#define all(v)  v.begin() , v.end()
#define vi(v,n) vector<int> v(n)
#define str string
#define fora(e,v) for(auto &e :v)
#define endl "\n"

stack<int> st;

void dfs(int node , vector<int>adj[],vector<bool> &visited)
{
    if(!visited[node])
        visited[node]=true;
    for(auto &it:adj[node])
    {
        if(!visited[it])
        {
            dfs(it,adj,visited);
        }
    }
    st.push(node);

}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    while(true)
    {
        int n , m;
        cin >> n >> m;
        if(n==0 && m==0)
            return 0;
        vector<int> adj[n+1];
        vector<bool> visited(n+1,false);
        for(int i=0;i<m;i++)
        {
            int u ,v;
            cin >> u >> v;
            adj[u].push_back(v);
            
        }

        for(int i=1;i<=n;i++)
        {
            if(!visited[i])
                dfs(i,adj,visited);
        }

        while(!st.empty())
        {
            cout << st.top() << " ";
            st.pop();
        }
        cout << endl;

    }
  

   
}

