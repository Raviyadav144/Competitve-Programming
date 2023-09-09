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
   vector<int> twoSum(vector<int>& nums, int target) {
      map<int,int>m;
      for(int i =  0 ; i < nums.size(); ++i)
      {
          m[nums[i]] = i;
      }
      for(int i  = 0 ; i < nums.size() ; ++i)
      {
          if(m[target - nums[i]] && m[target - nums[i]] !=i)
          return {i, m[target- nums[i]]};
      }
    return {};
    }
};
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    vector<int> nums = {2,2,2,2,2};
    Solution s1;
    vector<vector<int>>ans = s1.twoSum(nums, 8);
    // cout << ans.size() << endl;
    cout << "ANS STARTS HERE" << endl;
    fora(e, ans)
    {
        fora(v , e)
        cout << v<< " ";
        cout << endl;
    }
       
    
}