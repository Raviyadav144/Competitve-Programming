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

int RodCut(vector<int>&price , int n )
{   int dp[n+1][n+1];
   memset(dp,0,sizeof(dp));
   for(int i =0 ;i<=n;++i)
   {
        dp[i][0] = 0; 
   }
   for(int i =1 ;i<=n;++i)
   {
        dp[0][i] =0; 
   }
   
   for(int i =1;i<=n;++i)
   {
        for(int j = 1;j<=n;++j)
        {
            if((i)<=j)
                dp[i][j] = max(price[i-1]+dp[i][j-(i)], dp[i-1][j]);
            else
                dp[i][j] = dp[i-1][j];
        }
   }
   return dp[n][n];
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n ;
    cin >> n;
    vector<int>price(n);
    fora(e,price)
    cin >> e;
    cout << RodCut(price , n) << endl;

}

