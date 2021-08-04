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
#define mod 1000000009

int MaxWays(vector<int>&coins , int v , int m)
{
    int dp[m+1][v+1];
    memset(dp,0,sizeof(dp));
    for(int i = 0;i<=v;++i)
    {
        dp[0][i] = INT_MAX-1;
    }
    for(int i = 0;i<=m;i++)
    {
        dp[i][0] = 0;
    }
    for(int i =1 ;i<=m;i++)
    {
        for(int j = 1;j<=v;j++)
        {
            if(coins[i-1]<=j)
                dp[i][j] = min(1+dp[i][j-coins[i-1]],dp[i-1][j]);
            else
                dp[i][j] = dp[i-1][j];
        }
    }
    return (dp[m][v]==INT_MAX-1)?-1 : dp[m][v];
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int v ,m;
    cin >> v >> m;
    vector<int>coins(m);
    fora(e,coins)
    cin >> e;
    cout << MaxWays(coins , v , m) << endl;

}

