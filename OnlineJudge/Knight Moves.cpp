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

int dx[8] = {1,1,2,-2,-1,-1,2,-2};
int dy[8] = {2,-2,1,1,2,-2,-1,-1};
bool isValid(int r , int c)
{
    return r>=0 && r <8 && c>=0 && c<8;
}

int bfs(int sc , int sr , int dc , int dr)
{
    int chess[8][8];
    memset(chess,-1,sizeof(chess));
    chess[sr][sc] = 0;
    queue<int>q;
    q.push(sc);
    q.push(sr);
    while(!q.empty())
    {
        int c = q.front();
        q.pop();
        int r = q.front();
        q.pop();
        if(c==dc && r==dr)
            return chess[r][c];
        for(int i = 0;i<8;++i)
        {   int nr = r+dx[i] , nc = c+dy[i]; 

            if(isValid(nr , nc))
            {
                if(chess[nr][nc]==-1)
                {
                    chess[nr][nc] = chess[r][c]+1;
                    q.push(nc);
                    q.push(nr);
                }
            }
        }
       
    }
    return -1;

}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    string a , b;
    while(cin >> a >> b)
    {   
        //cout << a[0]-'a'<<" " << a[1]-'1' << " "<< b[0]-'a'<<" " << b[1]-'1' << endl;
        int ans = bfs(a[0]-'a' , a[1]-'1' , b[0]-'a' , b[1]-'1');
        cout << "To get from " <<a << " to " << b << " takes " << ans << " knight moves." << endl;
    }

}