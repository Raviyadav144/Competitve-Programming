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

int dp[100001][3];
int vac[100001][3];

int happy(int n)
{
    for(int i =1;i<n;++i)
    {
        for(int j =0;j<3;j++)
        {
            if(j==0)
                dp[i][j] = vac[i][j]+max(dp[i-1][1],dp[i-1][2]);
            else if(j==1)
                dp[i][j] = vac[i][j]+max(dp[i-1][0],dp[i-1][2]);
            else
                dp[i][j] = vac[i][j]+max(dp[i-1][0],dp[i-1][1]);            
        }
    }
    return max(max(dp[n-1][0],dp[n-1][1]),dp[n-1][2]);
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    
    for(int i = 0;i<n;i++)
        for(int j = 0;j<3;++j)
        {
            cin >> vac[i][j];
        }
    memset(dp,-1,sizeof(dp));
    for(int i =0;i<3;++i)
    {
        dp[0][i] = vac[0][i];
    }
    cout << happy(n) << endl;
}

