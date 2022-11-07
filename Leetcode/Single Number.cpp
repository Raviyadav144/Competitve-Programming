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
    int singleNumber(vector<int>& nums) {
        int ans = 0 ;
        for(int i = 0; i <nums.size();++i)
        {
            ans ^= nums[i];
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
    Solution sol;;
    int ans = sol.singleNumber(v);
    cout << ans << endl;
   
}