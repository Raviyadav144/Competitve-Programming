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
    void sortColors(vector<int>& nums) {
        int red = 0 , white = 0 , blue = 0;
        for(int i = 0 ; i < nums.size();++i)
        {
            if(nums[i]==0)
            ++red;
            else if(nums[i]==1)
            ++white;
            else
            ++blue;
        }
        for(int i = 0 ; i < red;++i)
        nums[i]=0;
        for(int i = red; i < red+white;++i)
        nums[i]=1;
        for(int i = red+white; i < nums.size();++i)
        nums[i]=2;
        return ; 
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