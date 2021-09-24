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

int prevx , prevy;
bool visited[51][51];
char dots[51][51];
int x[4] = {0,1,0,-1};
int y[4] = {1,0,-1,0};
bool valid(int i , int j , char a , char e)
{
    return (i>=1 && i<=50 && j >=1 && j<=50 && a==e && !(i==prevx && j==prevy) );
}
int dfs(int i ,int j , char a , char e)
{   visited[i][j] = true;
    for(int k=0;k<=3;k++)
    {
        if(valid(i+x[k] , j+y[k] ,dots[i+x[k]][j+y[k]] ,e ))
        {   if(visited[i+x[k]][j+y[k]] == true  )
                return 1;
            else
            {
                prevx = i , prevy = j;
                dfs(i+x[k] , j+y[k] , dots[i+x[k]][j+y[k]] ,e );
            }
        }
    }
    return 0 ;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n , m;
    cin >> n >> m;
    
    
    memset(visited,false,sizeof(visited));
    set<char>color;
    for(int i =1;i<=n;++i)
    {
        for(int  j  = 1;j<=m;++j)
        {
            cin >> dots[i][j];
            color.insert(dots[i][j]);
        }
    }
    fora(e,color)
    {
        for(int i = 1;i<=n;++i)
        {
            for(int j = 1;j<=m;++j)
            {
                if(dots[i][j] == e && valid(i,j,e,e) && !visited[i][j])
                {   
                    prevx = -1 , prevy = -1;
                    int val = dfs(i,j,e,e);
                    if(val ==1)
                    {
                        cout << "Yes" << endl;
                        return 0;
                    }

                    memset(visited , false , sizeof(visited));
                }
                
            }
        }
    }
    cout << "No" << endl;

}