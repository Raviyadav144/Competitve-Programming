#include<bits/stdc++.h>
using namespace std;

#define forn(i,j,n) for(int i =j; i<n; i++)
#define ll long long
#define all(v)  v.begin() , v.end()
#define vi(v,n) vector<int> v(n)
#define str string
#define fora(e,v) for(auto &e :v)
#define endl "\n"

char pic[30][30];
bool visited[30][30];
int x[8] ={1,0,-1,0,1,-1,1,-1}; 
int y[8] ={0,1,0,-1,1,-1,-1,1};

bool valid(int &i ,int &j ,int &n)
{
    return i>=0 && i <n && j>=0 && j<n && !visited[i][j] && pic[i][j]=='1';
}

void dfs(int i,int j,int n)
{   
    
    if(valid(i,j,n))
    {
        visited[i][j] = true;
        for(int k=0;k<8;k++)
        {  
            dfs(i+x[k],j+y[k],n);
        }
    }
    
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0); 
    int t =1;
    int n;
    while(cin >> n)
    {   
        for(int i=0;i<n;i++)
        {
            cin >> pic[i];
        }
        memset(visited , false,sizeof(visited));
        int ans =0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(valid(i,j,n))
                {
                    dfs(i,j,n);
                    ans++;
                }
            }
        }

        cout << "Image number " << t++ << " contains " << ans << " war eagles"<< endl;
   }
}

