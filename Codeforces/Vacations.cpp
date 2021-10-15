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


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n ;
    vector<int>task(n+1);
    for(int i = 1;i<=n;++i)
        cin>> task[i];

    int dp[n+1][2];
    
    memset(dp,0,sizeof(dp));
    for(int i= 1 ;i<=n;++i)
    {
        dp[i][0]=dp[i][1] = max(dp[i-1][0] , dp[i-1][1]);
        if(task[i]==1 || task[i]==3)
            dp[i][0] = 1+dp[i-1][1];
        if(task[i] == 2 || task[i] ==3)
            dp[i][1] = 1+dp[i-1][0];
    }
    cout <<n-max(dp[n][0],dp[n][1]) << endl;

    
}