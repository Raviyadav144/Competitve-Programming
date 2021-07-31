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

int dp[100001];
int cost(int n , int k , vector<int>&h)
{   
    dp[0]=0;
    dp[1] = abs(h[1]-h[0]);
    for(int i = 2;i<n;i++)
    {   dp[i] = INT_MAX;
        for(int j =1 ;j<=k;j++)
        {   if(j>i)
                break;
            dp[i] = min(dp[i],dp[i-j]+abs(h[i]-h[i-j]));
        }
    }
    return dp[n-1];
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n , k;
    cin >> n >> k;
    vector<int>h(n);
    fora(e,h)
    cin >> e;
    cout << cost(n,k,h) << endl;
    

   
}

