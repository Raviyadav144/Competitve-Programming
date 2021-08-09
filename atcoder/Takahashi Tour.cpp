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


int ShortestSuperSeq(string &x ,string &y, int n , int m )
{
    string a ="";
    int dp[n+1][m+1];
    memset(dp,0,sizeof(dp));
    for(int i=1;i<=n;++i)
    {
        for(int j=1;j<=m;++j)
        {
            if(x[i-1]==y[j-1])
            {
                dp[i][j] = 1+dp[i-1][j-1];
               
            }
            else
            {
                dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
                
            }
        }
    }
    int i = n;
    int j = m;
    while(i>0 && j >0)
    {
        if(x[i-1]==y[i-1])
        {
            a+=x[i-1];
            --i;
            --j;
        }
        else
        {
            if(dp[i-1][j]<dp[i][j-1])
            {
                a+=y[j-1];
                --j;
            }
            else
            {
                a+=x[i-1];
                --i;
            }
        }
    }
    while(i>0)
    {
        a+=x[i-1];
        --i;
    }
    while(j>0)
    {
        a+=y[j-1];
        --j;
    }
    reverse(a.begin(),a.end());
    cout << a << endl;
    return dp[n][m];
}


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    string x ,y;
    cin >> x >> y;
    int n = x.length();
    int m  =y.length();
    cout << ShortestSuperSeq(x,y,n,m) << endl;

}

