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
    cin >> n;
    vector<int>trees(n);
    vector<int>height(n);
    // trees.push_back(0);
    // height.push_back(0);
    for(int i = 0;i<n;++i)
    {
        cin >> trees[i] >> height[i];
    }
    if(n==1)
    {
        cout << 1 << endl;
        return 0 ;
    }
    int dp[n][2];
    memset(dp,0,sizeof(dp));
    //dp[0][0] = 1;
    for(int i = 1;i<n-1;++i)
    {   
        if(trees[i]-height[i]>trees[i-1])
            dp[i][0] = 1+max(dp[i-1][0],dp[i-1][1]);
        else if(trees[i]+height[i]<trees[i+1])
        {
            dp[i][1] = 1+max(dp[i-1][1],dp[i-1][0]);
            trees[i]+=height[i];
        }
        else
        {
            dp[i][0] = dp[i-1][0];
            dp[i][1] = dp[i-1][1];
        }
    }
    cout << 2+max(dp[n-2][0] , dp[n-2][1]) << endl;

}