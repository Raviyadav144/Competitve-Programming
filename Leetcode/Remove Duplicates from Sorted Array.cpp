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
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        if(n==0)
            return 0;
        int prev = nums[0];
        int val = 1;
        int count = 1 ;
        
        
        for(int i =1 ;i<n;++i)
        {
            if(nums[i]!=prev)
            {
                count++;
                prev = nums[i];
                nums[val] = nums[i];
                val++;
            }
        }
        return count;
    }
};
int main()
{
    vector<int>v = {1,2,2,3,3,4};
    Solution s1;
    int a = s1.removeDuplicates(v);
    cout << a << endl;

}