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
    void filter (int n , vector<int>&nums , vector<vector<int>> &final , unordered_map<string,bool> &m)
    {
        vector<int>ans;
        string check  = "";
        for(int i = 0 ;i<= nums.size();++i )
        {
            if( n & 1)
            {
                ans.push_back(nums[i]);
               
            }
            n >>=1;
        }
        sort(ans.begin() , ans.end());
        for(int i = 0 ; i< ans.size();++i)
        {
             check +=(to_string(ans[i]));
        }
        if(!m[check])
        {
            final.push_back(ans);
            m[check] = true;
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>>final;
        unordered_map<string, bool>m;
        for(int i  =0; i < (1 << n);++i)
        {
            filter(i , nums , final , m);
        }
        sort(final.begin() , final.end());
        return final;
        
    }
};
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    // input for the fucntion
    vector<int>v;
    int n ;
    cin>> n;
    while(n--)
    {
        int a;
        cin >> a;
        v.push_back(a);
    }
    // string first , goal;
    // cin >> first >> goal;
    
    Solution sol;;
    vector<vector<int>> ans = sol.subsetsWithDup(v);
    fora(e , ans)
    {
        fora(v ,e)
        {
            cout << v << " ";
        }
        cout << endl;
    }
    // cout << ans << endl;
    // cout << endl;
   
}