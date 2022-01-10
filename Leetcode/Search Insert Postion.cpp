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
    int searchInsert(vector<int>& nums, int target) {
        int hi = nums.size(),lo = 0;
        if(target < nums[0])
            return 0;
        while(hi-lo > 1)
        {
            int mid = lo + (hi-lo)/2;
            if(nums[mid]>target)
            {
                hi = mid;
            }
            else
                lo = mid;
        }
        if(nums[lo]==target)
            return lo;
       else
           return lo+1;
        
        
    }
};
int main()
{
   vector<int>v = {1,2,4,5};
   int target = 3;
   Solution s1;
   int a = s1.searchInsert(v,target);
   cout << a << endl;


}