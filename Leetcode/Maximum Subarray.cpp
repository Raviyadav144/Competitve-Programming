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
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        if(n==1)
        return nums[0];
        long long sum = 0 , max_val = INT_MIN;
        for(int i = 0 ; i < n;++i)
        {
            sum+=nums[i];
            max_val = max(max_val, sum);
            if(sum < 0)
                sum = 0;

          
        }
        return (max_val);
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
    vector<int>v = {1,2,3};
    int ans = sol.maxSubArray(v);
    // fora(e , ans)
    // {
    //     // fora(v ,e)
    //     // {
    //     //     cout << v << " ";
    //     // }
    //     // cout << endl;
    //     cout << e << endl;
    // }
    cout << ans << endl;
    // // cout << endl;
   
}