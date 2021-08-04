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

int targetSum(vector<int>&subs , int target)
{   int n = subs.size();
    int count = 0;
    int sum = accumulate(all(subs),0);
    if((target+sum)%2!=0)
        return 0;
    if(target > sum)
        return 0;
    target = (target+(accumulate(all(subs),0)))/2;
    int dp[n+1][target+1];
    for(int i=0;i<=n;i++)
    {
        dp[i][0] = 1;
    }
    for(int i =1;i<=target;++i)
    {
        dp[0][i] = 0;
    }
    for(int i =1;i<=n;++i)
    {
        for(int j = 0;j<=target;++j)
        {
            if(subs[i-1]<=j)
            {
                dp[i][j] = dp[i-1][j-subs[i-1]]+ dp[i-1][j];
            }
            else
                 dp[i][j] = dp[i-1][j];
        }
    }
    return dp[n][target];
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n ;
    cin >> n;
    vector<int>subs(n);
    fora(e,subs)
    cin >> e;
    int target;
    cin >> target;

    cout << targetSum(subs , target) << endl;

}

