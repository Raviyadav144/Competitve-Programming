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


int cost(int n ,vector<int>&ht,vector<int>&dp)
{
    dp[0] = dp[1] = 0;
    dp[2] = abs(ht[2]-ht[1]);
    for(int i =3;i<=n;i++)
    {
        dp[i]=min(dp[i-1]+abs(ht[i]-ht[i-1]) , dp[i-2]+abs(ht[i]-ht[i-2]));
    }  
     return dp[n];
}   

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int n;
    cin >> n ;
    vector<int>dp(n+1,0);
    vector<int> height(n+1);
    for(int i =1;i<=n;i++)
    {
        cin >> height[i];
    }

    cout << cost(n,height,dp) << endl; 
   
}

