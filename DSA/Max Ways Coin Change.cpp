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

int MaxWays(vector<int>&coins , int n , int m)
{
    int dp[m+1][n+1];
    memset(dp,0,sizeof(dp));
    for(int i = 0;i<=m;++i)
    {
        dp[i][0] = 1;
    }

    for(int i = 1;i<=m;i++)
    {
        for(int j =1;j<=n;++j)
        {
            if(coins[i-1]<=j)
            {
                dp[i][j] = dp[i][j-coins[i-1]]+dp[i-1][j];
            }
            else
                dp[i][j] = dp[i-1][j];
        }
    }
    return dp[m][n];
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n ,m;
    cin >> n >> m;
    vector<int>coins(m);
    fora(e,coins)
    cin >> e;
    cout << MaxWays(coins , n , m) << endl;

}

