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


map<pair<int,int>,bool> m;
map<pair<int,int>,bool> visited;
int x[6] = {-1,-1,0,0,1,1};
int y[6] = {-1,0,-1,1,0,1};

bool valid(int i , int j)
{
    return (m[{i,j}] && !visited[{i,j}]);
}

void dfs(int  i , int j )
{
    for(int k = 0;k<6;++k)
    {
        if(valid(i+x[k] , j+y[k]))
        {
            visited[{i+x[k],j+y[k]}] = true;
            dfs(i+x[k] , j+y[k]);
        }
    }
}

int main() {
    
    ios::sync_with_stdio(false);
    cin.tie(0);  
    int count = 0 ;
    int n ;
    cin >> n;
  
    vector<pair<int,int>>v;
    for(int i = 0 ;i<n;++i)
    {
        int a , b ;
        cin >>a >> b;
        m[{a,b}] = true;;
        v.push_back({a,b});
    }
    // fora(e,m)
    // cout << e.first.first <<  " " << e.first.second << e.second <<  endl;
    for(int i  = 0 ;i<n;++i)
    {
        if(valid(v[i].first , v[i].second))
        {
            count++;
            visited[{v[i].first,v[i].second}] = true;
            dfs(v[i].first , v[i].second);
        }
    }
    cout << count << endl;
}

