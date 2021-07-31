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


ll knapsack(ll w , vector<ll>&wt,vector<ll>&val,int n)
{
    ll dp[n+1][w+1];
    for(ll i = 0;i<=n;i++)
    {
        for(ll j =0;j<=w;j++)
        {   if(i==0 || j==0)
                dp[i][j]=0;
            else if(wt[i-1]<=j)
            {
                dp[i][j] = max(val[i-1]+dp[i-1][j-wt[i-1]],dp[i-1][j]);
            }
            else
                dp[i][j] = dp[i-1][j];
        }
    }
    return dp[n][w];
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll n,w;
    cin >> n >> w;
    vector<ll>wt;
    vector<ll>val;
    
    for(int i=0;i<n;i++)
    {
        ll a , b;
        cin >> a >> b;
        wt.push_back(a);
        val.push_back(b);
    }

    cout << knapsack(w , wt , val , n) << endl;
    

    
    
}

