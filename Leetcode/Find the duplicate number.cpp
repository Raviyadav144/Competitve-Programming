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
    int findDuplicate(vector<int>& nums) {
        sort(nums.begin() , nums.end());
      
        int ans = 0 ;
        for(int i = 1 ; i< nums.size();++i)
        {
            if((nums[i] ^ nums[i-1]) == 0)
            {
                ans = nums[i];
                break;

            }
        }
    return ans;
    }
};
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    // input for the fucntion
    vector<int>v;
    int n ;
    cin>> n;
    while(n--)
    {
        int a;
        cin >> a;
        v.push_back(a);
    }
    // string first , goal;
    // cin >> first >> goal;
    
    Solution sol;;
    int ans = sol.findDuplicate(v);
    // fora(e , ans)
    // cout << e << " ";
    cout << ans << endl;
    // cout << endl;
   
}