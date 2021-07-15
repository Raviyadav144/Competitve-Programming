#include<bits/stdc++.h>
using namespace std;

#define forn(i,j,n) for(int i =j; i<n; i++)
#define ll long long
#define all(v)  v.begin() , v.end()
#define vi(v,n) vector<int> v(n)
//#define str string
#define fora(e,v) for(auto &e :v)
#define endl "\n"
#define pi acos(-1.0)

map<char,int>m = {{'A',1},{'B',2},{'C',3}};
void topo( vector<int>adj[],vector<int> &inDegree)
{
    queue<int> q;
   for(int i=1;i<inDegree.size();i++)
   {
        if(inDegree[i]==0)
            q.push(i);
   }

    while(!q.empty())
    {
        int node = q.front();
        q.pop();
        fora(e,m)
        if(e.second==node)
            cout << e.first;
        
        for(auto &it: adj[node])
        {
            inDegree[it]--;
            if(inDegree[it]==0)
                q.push(it);
        }
    }
}

    
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int nodes = 3;
    
    vector<int>adj[nodes+1];
    vector<int> inDegree(4);
    
    int a =3;
    while(a--)
    {
        string comp;
        cin >> comp;
        if(comp[1]=='<')
        {
            adj[m[comp[0]]].push_back(m[comp[2]]);
            inDegree[m[comp[2]]]++;
        }
        else
        {
             adj[m[comp[2]]].push_back(m[comp[0]]);
            inDegree[m[comp[0]]]++;

        }
    }
    int count=0;
   for(int i=1;i<4;i++)
    if(inDegree[i]==0)
        count++;
    if(count==0)
    {
        cout << "Impossible" << endl;
        return 0;
    }
    topo(adj,inDegree);
}

