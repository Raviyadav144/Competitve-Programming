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
    int removeElement(vector<int>& nums, int val) {
        int ind  = 0;
        int n =nums.size();
        
        for(int i = 0 ;i<n;++i)
        {
            if(nums[i]!=val)
            {   
                nums[ind++] = nums[i];              
            }
        }
        return ind;
        
    }
};
int main()
{
    vector<int>v = {1,2,2,3,3,4};
    int val = 2;
    Solution s1;
    int a = s1.removeElement(v,val);
    cout << a << endl;

}