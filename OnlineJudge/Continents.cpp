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

int n, m;
int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};
char world[22][22];
bool visited[22][22];
int che = 0;
bool valid(int x , int y,char a)
{
    return (x>=0 && x<n && y>=0 && y<m && !visited[x][y] && world[x][y]==a);
}
int bfs(int x , int y , char a)
{       
        queue<int>q;
        q.push(x);
        q.push(y);
        int count  = 0;
        while(!q.empty())
        {
            int x1 = q.front();
            q.pop();
            int y1 = q.front();
            q.pop();
            for(int k = 0;k<4;++k)
            {   int x2 = x1+dx[k], y2 = y1+dy[k];
            
                if(y2 == m)
                    y2 = 0;
                if(y2 == -1)
                    y2 = m-1;

                if(valid(x2,y2,a))
                {
                    visited[x2][y2] = true;
                    q.push(x2);
                    q.push(y2);
                    count++;
                }
            }
        }
        return count;
}


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);    
    while(cin >> n>> m)
    {
        memset(visited,false,sizeof(visited));
       
        for(int i = 0;i<n;++i)
        {
            for(int j = 0;j<m;++j)
            {
                cin >> world[i][j];            
            }
        }

        int x, y;
        cin >> x >> y;
        visited[x][y] = true;
        int temp = bfs(x,y,world[x][y]);
        //cout << world[x][y] << endl;
        //cout << temp << endl;
        int max = 0;
        
        for(int i = 0;i<n;++i)
        {
            for(int j = 0;j<m;++j)
            {
                if(valid(i,j,world[x][y]))
                {   
                    visited[i][j] = true;
                    int count = bfs(i,j,world[x][y]);
                    ++count;
                    if(count > max)
                        max = count;
                }
            }
        }
       
            cout << max << endl;
       

    }
}