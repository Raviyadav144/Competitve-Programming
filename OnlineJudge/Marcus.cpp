#include<bits/stdc++.h>
using namespace std;

#define forn(i,j,n) for(int i =j; i<n; i++)
#define ll long long
#define all(v)  v.begin() , v.end()
#define vi(v,n) vector<int> v(n)
#define str string
#define fora(e,v) for(auto &e :v)
#define endl "\n"

char cobble[8][8];
char path[7] = {'I','E','H','O','V','A','#'};
vector <string> ans;
int it =0;
int x[3] ={-1,0,0}; 
int y[3] ={0,-1,1};

bool valid(int i , int j,int n , int m,int k)
{
    return i >=0 && i <n && j >=0 && j<m  && cobble[i][j] == path[it] ;
}

void dfs(int i , int j , int n , int m)
{   if(it == 7)
    return;
    for(int k=0;k<3;k++)
    {
        if(valid(i+x[k],j+y[k],n,m,k))
        {   
            it++;
            if(x[k]==-1)
                ans.push_back("forth");
            else if(y[k]==-1)
                ans.push_back("left");
            else if(y[k]==1)
                ans.push_back("right");
            
            dfs(i+x[k],j+y[k] ,n ,m);
            
        }
    }
}


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0); 
    int t;
    cin >> t;
    while(t--)
    {
        int  n,m;
        cin >> n>> m;
        for(int i=0;i<n;i++)
        {
            cin >> cobble[i];
        }
        
        
        for(int j=0;j<m;j++)
        {
            if(cobble[n-1][j]=='@')
            {
                dfs(n-1,j,n,m);
                break;
            }
        }
        // going only to size-1 because of presentaion error
        forn(i,0,ans.size()-1)
        cout << ans[i] << " ";
        cout << ans[ans.size()-1];
        cout << endl;
        it =0;
        ans.clear();


    }
}

