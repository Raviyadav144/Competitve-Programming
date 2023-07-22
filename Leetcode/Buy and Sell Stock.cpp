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

class Solution {
public:
    int maxProfit(vector<int>& prices) {
    int n = prices.size();
    vector<int>v(n);
    int max_val = prices[n-1];
    for(int i = n-1 ; i >= 0 ;--i)
    {
        if(prices[i] >= max_val)
        {
            max_val = prices[i];
            
        }
        v[i] = max_val;
    }
    // fora(e, v)
    // cout << e <<" ";
    // cout << endl;
    int ans = 0 ;
    for(int i = 0 ; i < n-1 ; ++i)
    {
        if(v[i+1] - prices[i] > ans)
            ans = v[i+1] - prices[i];
    }
    // cout << ans << endl;
    return ans;
    }
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    // vector<int>v;
    // int n;
    // cin>> n;


    Solution sol;
    // vector<int> ans  = sol.getRow(n);
    vector<int>v = {0,0,1,2,2,1,2,0};
    sol.sortColors(v);
    fora(e , v)
    {
        // fora(v ,e)
        // {
        //     cout << v << " ";
        // }
        // cout << endl;
        cout << e << endl;
    }
    // cout << ans << endl;
    // // cout << endl;
   
}