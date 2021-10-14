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
    vector<int>task(n);
    fora(e,task)
    cin >> e;
    int ans = INT_MAX;
    vector<vector<int>>dp(n+1,vector<int>(3,0));
    dp[0][0] = 0 ;
    dp[0][1] = 0 ;
    dp[0][2] = 0;
    int prev  = -1;
    for(int i = 1;i<=n;++i)
    {
        if(task[i-1]==0)
            dp[i][0] = 1+ min(min(dp[i-1][0],dp[i-1][1]),dp[i-1][2]);
        else if(task[i-1] == 1)
        {
            if(prev != 1 && prev != 3)
                dp[i][1] = min(min(dp[i-1][0],dp[i-1][1]),dp[i-1][2]);
            else
                dp[i][1] = 1+min(min(dp[i-1][0],dp[i-1][1]),dp[i-1][2]);
            ans = min(ans , dp[i][1]);

        }
        else if(task[i-1]==2)
        {
            if(prev!=3 && prev != 2)
                dp[i][2] = min(min(dp[i-1][0],dp[i-1][1]),dp[i-1][2]);
            else
                dp[i][2] = 1+ min(min(dp[i-1][0],dp[i-1][1]),dp[i-1][2]);
            ans = min(ans , dp[i][2]);
        }
        else
        {
            dp[i][0] = min(min(dp[i-1][0],dp[i-1][1]),dp[i-1][2]);
            ans = min(ans , dp[i][0]);
        }
        
        prev = task[i-1];
        
    }
    for(int i= 0;i<=n;++i)
    {
        for(int j = 0;j<3;++j)
            cout << dp[i][j] << " ";
        cout << endl;
    }
    cout << ans << endl;
}