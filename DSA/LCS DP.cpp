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


int LCS(string &x , string &y , int n , int m)
{
    int dp[n+1][m+1];
    memset(dp,0,sizeof(dp));

    for(int i =1;i<=n;++i)
    {
        for(int j=1;j<=m;++j)
        {
            if(x[i-1]==y[j-1])
                dp[i][j] = 1+dp[i-1][j-1];
            else
                dp[i][j] = max(dp[i][j-1],dp[i-1][j]);
        }
    }
    return dp[n][m];
}


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    string x , y;
    cin >> x >> y;
    int n = x.length();
    int m = y.length();
    cout << LCS(x,y,n,m) << endl;

}

