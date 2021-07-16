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

int xaxis[4]={0,1,-1,0}; 
int yaxis[4]={1,0,0,-1};
char office[100][100];
char president;
set<char> st;
void deputies(int a, int b)
{   

    for(int i=0;i<4;++i)
    {   char val = office[a+xaxis[i]][b+yaxis[i]];
        if(val!=president && val!='.')
        {  
            st.insert(val);
        }
    }
    
}
    
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n , m;
    cin >> n >> m;
   
    cin >> president;
    memset(office , '.',sizeof(office));
    
    for(int i=1;i<=n;i++)
    {   for(int j=1;j<=m;j++)
            cin >> office[i][j];
    }
    
    for(int i=1;i<=n;++i)
    {
        for(int j=1;j<=m;++j)
        {
            if(office[i][j]==president)
            {    deputies(i,j);
                
            }
        }
    }
    cout << st.size() << endl;

    
}