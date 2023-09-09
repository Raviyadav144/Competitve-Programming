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
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
       sort(nums.begin() , nums.end());
       vector<vector<int>>ans;
       for(int i= 0; i <nums.size(); ++i)
       {
           if(i != 0 && nums[i]==nums[i-1])
            continue;
           for(int j = i+1 ; j< nums.size();++j)
           {
               if(j>i+1 && nums[j]==nums[j-1])
                continue;
               int k = j+1 , l = nums.size()-1;
               int val = nums[i]+nums[j];
               while(k<l)
               {
                   cout << i << " " << k << " "<< l << endl;
                   if(val+nums[k]+nums[l]==target)
                   {
                       ans.push_back({nums[i], nums[j], nums[k], nums[l]});
                        ++k;
                        --l;
                        while(k < l && nums[k]==nums[k-1])
                        ++k;
                        while(k < l && nums[l] == nums[l+1])
                        --l;
                   }
                   else if( val+nums[k]+nums[l]<target)
                   ++k;
                   else
                   --l;
                    cout << i << " "<< k << " "  << l << endl;
               }
           }
       }
       return ans;
    }
    
};
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    vector<int> nums = {2,2,2,2,2};
    Solution s1;
    vector<vector<int>>ans = s1.fourSum(nums, 8);
    // cout << ans.size() << endl;
    cout << "ANS STARTS HERE" << endl;
    fora(e, ans)
    {
        fora(v , e)
        cout << v<< " ";
        cout << endl;
    }
       
    
}