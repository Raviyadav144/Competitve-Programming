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
        int n = nums.size();
        int low = 0 , mid = 0 , high = n-1;
        while(mid <= high)
        {
            if(nums[mid] ==0 )
            {
                swap(nums[mid] , nums[low]);
                ++low ;
                ++mid;
            }
            else if (nums[mid]==1)
                ++mid;
            else 
            {
                swap(nums[mid] , nums[high]);
                --high;
            }
        }
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