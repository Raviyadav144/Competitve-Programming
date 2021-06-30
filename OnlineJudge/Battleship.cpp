#include<bits/stdc++.h>
using namespace std;

#define forn(i,j,n) for(int i =j; i<n; i++)
#define ll long long
#define all(v)  v.begin() , v.end()
#define vi(v,n) vector<int> v(n)
#define str string
#define fora(e,v) for(auto &e :v)
#define endl "\n"

char sea[100][100];
bool visited[100][100];
int x[4] ={1,0,-1,0};
int y[4] ={0,1,0,-1};
int count1=0;
int h , v;

bool valid(int i, int j , int n)
{
    return i<n && i>=0 && j<n && j>=0 && !visited[i][j] && (sea[i][j]=='x'||sea[i][j]=='@');
}


void dfs(int i , int j , int h , int v , int n)
{
      visited[i][j] = true;
       if(sea[i][j]=='x')
                count1++;

        if(valid(i+h,j+v,n))
            {   
                dfs(i+h,j+v,h,v,n);
            }
    
}
void dfscheck(int i, int j , int n)
{
    for(int k=0;k<4;k++)
        {
            if(valid(i+x[k],j+y[k],n))
                {   
                  
                    h=x[k];
                    v=y[k];
                 }
        }
        dfs(i,j,h,v,n);

}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0); 
    int t;
    cin >> t;
    int tc = 1;
    while(t--)
    {
        int n;
        cin >> n;
        for(int i=0;i<n;i++)
        {
            cin >> sea[i];
        }
        int ans =0;
        memset(visited,false,sizeof(visited));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(valid(i,j,n))
                {
                    dfscheck(i,j,n);
                    if(count1!=0)
                    {
                        ans++;
                       
                    }
                    count1=0;
                }
            }
        }
        cout << "Case "<< tc++ << ": " << ans << endl;
        



    }
    
}

