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
        int count = 0 , ans = 0 ;
        int mine = *max_element(nums.begin(),nums.end());
        for(int i = 0 ;i<nums.size();++i)
        {
            count+=nums[i];
            ans = max(count,ans);
            if(count < 0)
            {
                
                count = 0 ;
            }
        }
        if(mine < 0 )
            return mine;
        return ans;
    }
};
int main()
{
   ios::sync_with_stdio(false);
   cin.tie(0);
   int n;
   cin >> n;
   vector<int>v(n);
   fora(e,v)
   cin >> e ;


   Solution s1;
   int b = s1.maxSubArray(v);
   cout << b << endl;
}