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
    void nextPermutation(vector<int>& nums) {
        int ind = -1;
        for(int i = nums.size()-1; i>0 ;--i )
        {
            if(nums[i-1] < nums[i])
            {
                ind = i-1;
                break;
            }
        }
        // cout << ind << endl;
        if(ind == -1)
        return (sort(nums.begin() , nums.end()));
        int val = INT_MAX;
        int ind1 = -1;
        for(int i =  ind+1 ; i < nums.size();++i)
        {
            if(nums[i] > nums[ind])
                {
                    if(nums[i] < val)
                    {
                        val = nums[i];
                        ind1 = i;
                    }
                }
        }
        swap(nums[ind] , nums[ind1]);
        sort(nums.begin()+ind+1 , nums.end());
        fora(e , nums)
        cout << e << " ";
        cout <<endl;
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
    vector<int>v = {1,2,3};
    sol.nextPermutation(v);
    // fora(e , ans)
    // {
    //     // fora(v ,e)
    //     // {
    //     //     cout << v << " ";
    //     // }
    //     // cout << endl;
    //     cout << e << endl;
    // }
    // cout << ans << endl;
    // // cout << endl;
   
}