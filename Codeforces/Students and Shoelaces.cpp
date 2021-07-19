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


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int students , laces;
    cin >> students >> laces;
    vector<set<int>> adj(students+1);
   
    while(laces--)
    {
        int u , v;
        cin >> u >> v;
        
        adj[u].insert(v);
        adj[v].insert(u);
    }
   
   int count =0;

   while(true)
   {    vector<int> node;
        for(int i = 1;i<=students;++i)
        {
            if(adj[i].size()==1)
            {
                node.push_back(i);

            }
        }

        if(node.size()==0)
            break;
        else
            count++;

        for(auto &it : node)
        {   
             auto no = adj[it].begin();
             
             adj[it].clear();
             
             adj[*no].erase(it);

        }
        
        
   }
   cout << count << endl;

      
}

