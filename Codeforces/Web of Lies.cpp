#include<bits/stdc++.h>
using namespace std;

#define forn(i,j,n) for(int i =j; i<n; i++)
#define ll long long
#define all(v)  v.begin() , v.end()
#define vi(v,n) vector<int> v(n)
#define fora(e,v) for(auto &e :v)
#define endl "\n"
#define pi acos(-1.0)
#define mod 1000000009

void add(int u , int v ,int &ans, vector<int>&vul)
{
    if(u>v)
        swap(u,v);
    vul[u]++;
    if(vul[u]==1)
        ans++;

}
void remove(int u, int v ,int &ans , vector<int>&vul)
{
    if(u>v)
        swap(u,v);
    vul[u]--;
    if(vul[u]==0)
        ans--;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n , m;
    cin >> n >> m;
    int ans = 0;
    vector<int>vul(n+1);
    for(int i =0;i<m;i++)
    {
        int u , v;
        cin >> u >> v;
        add(u,v,ans,vul);
       
    }

    int q;
    cin >> q ;
    while(q--)
    {   
        int a;
        cin >> a ;
        if(a==1)
        {
            int b , c;
            cin >> b >> c;
            add(c,b,ans,vul);
            
        }

        else if(a==2)
        {
            int b , c;
            cin >> b >> c;
            remove(c,b,ans,vul);
           
        }
        else
        {  
            cout << n-ans << endl;
            
        }
    }
}

