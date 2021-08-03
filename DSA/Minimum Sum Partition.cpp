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

vector<int> SubSum(vector<int> &subs , int n)
{
   int sum=0;
    for(int i=0;i<n;++i)
    {
        sum+=subs[i];
    }
    bool dp[n+1][sum+1];
    for(int i =0 ;i<=n;++i)
    {
        dp[i][0] = true;
    }
    for(int i =1;i<=sum;++i)
    {
        dp[0][i] = false;
    }
    for(int i =1;i<=n;++i)
    {
        for(int j =1;j<=sum;++j)
        {
            if(subs[i-1]<=j)
                dp[i][j] = dp[i-1][j-subs[i-1]] || dp[i-1][j];
            else
                dp[i][j]=dp[i-1][j];

        }
    }
    vector<int>values;
    for(int i = 0;i<=sum;++i)
    {
        if(dp[n][i])
            values.push_back(i);
    }
    values.push_back(sum);
    return values;
}

int MinSumPartition(vector<int> &subs , int n)
{
    vector<int> values = SubSum(subs, n);
    int range = values[values.size()-1];
    values.pop_back();

    int m = values.size();
    int ans = INT_MAX;
    for(int i =0;i<m;++i)
    {
        ans = min(ans , abs(range-(2*values[i])));
    }
    return ans;
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

    cout << MinSumPartition(subs , n) << endl;

}

