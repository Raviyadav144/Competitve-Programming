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
#define debug(v) for(auto & e :v) cout << e << endl;

map<pair<int,int> , bool>m;
map<pair<int,int>,int>mans;
int dx[8] = {1,0,1,0,-1,-1,-1,1};
int dy[8] = {0,1,1,-1,0,-1,1,-1};

bool valid(int r , int c)
{
    if(mans[{r,c}]==-1 && m[{r,c}])
        return true;
    else
        return false;
}

int bfs(int sr , int sc , int dr , int dc)
{
    queue<int>q;
    mans[{sr,sc}]=0;
    q.push(sr);
    q.push(sc);
    while(!q.empty())
    {
        int r = q.front();
        q.pop();
        int c = q.front();
        q.pop();
        if(r==dr && c == dc)
            return mans[{r,c}];
        for(int i =0 ;i<8;++i)
        {
            int nr = r+dx[i] , nc = c+dy[i];
            if(valid(nr,nc))
            {
                mans[{nr,nc}] = mans[{r,c}]+1;
                q.push(nr);
                q.push(nc);
            }
        }

    }
    return -1 ;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int sr , sc , dr , dc;
    cin >> sr >> sc >> dr >> dc;
    int n;
    cin >> n ;

    while(n--)
    {
        int r ,a ,b;
        cin >> r >>a >> b;
        for(int i = a;i<=b;++i)
        {
            m[{r,i}] = true;
            mans[{r,i}] = -1;
        }
    }
    cout << bfs(sr,sc,dr,dc) << endl;

}