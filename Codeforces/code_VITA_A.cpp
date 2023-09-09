//-----raviyadav144----//
#include<bits/stdc++.h>
using namespace std;

#define forn(i,j,n) for(int i =j; i<n; i++)
#define ll long long
#define all(v)  v.begin() , v.end()
#define vi(v,n) vector<int> v(n)
#define fora(e,v) for(auto &e :v)
#define endl "\n"
#define pi acos(-1.0)
#define mod 1000000007



int main() {
    
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n ;
    cin >> n;
    vector<int>adj[n+1];
    for(int i = 1 ;i<=n;++i)
    {
        int a ;
        while(cin >> a)
        {
            adj[i].push_back(a);
            if(cin.peek()=='\n')
                break;
        }
    }
    int s , e;
    cin >> s >> e;
    
    vector<int>dist(n+1 , INT_MAX);
    dist[s] = 0 ;
    queue<int>q;
    q.push(s);
    while(!q.empty())
    {
        int t = q.front();
        q.pop();
        fora(it,adj[t])
        {
            if(dist[t]+1 < dist[it])
            {
                dist[it] = dist[t]+1;
                q.push(it);
            }
        }
    }
    if(dist[e]==INT_MAX)
        cout << -1 << endl;
    else
        cout << dist[e] <<endl;




}  