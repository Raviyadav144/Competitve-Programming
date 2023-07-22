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
    int max_pro = 0;
    int min_val = INT_MAX;
    for(int i =0 ; i < n;++i)
    {
        min_val = min(min_val , prices[i]);
        max_pro = max(max_pro , prices[i] - min_val);
    }
    return max_pro;
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