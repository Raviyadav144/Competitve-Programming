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
    
    void subset_sum(vector<vector<int>>&ans , vector<int>v, vector<int>&temp , int ind, int n)
    {
        ans.push_back(temp);
        for(int i = ind ; i< n ;++i)
        {
            if(i!=ind && v[i-1]==v[i])
            continue;
            temp.push_back(v[i]);
            subset_sum(ans, v, temp , i+1, n);
            temp.pop_back();
        }

    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin() , nums.end());
        vector<vector<int>>ans;
        vector<int>temp;
        subset_sum(ans , nums, temp , 0, n);
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


    
    fora(e , v)
    {
        // fora(a ,e)
        // {
        //     cout << a<< " ";
        // }
        // cout << endl;
        cout << e << endl;
    }
    // cout << ans << endl;
    // // cout << endl;
   
}