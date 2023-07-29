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
    int majorityElement(vector<int>& nums) {
       int count = 0 ,element = 0 ;
       for(int i =0; i < nums.size();++i)
       {
           if(count == 0 )
           {
               element = nums[i];
               count = 1;
           }
           else if(nums[i]==element)
           {
               ++count;
           }
           else
           --count;
       }
       return element;
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
    vector<vector<int>>v = {{1,3}, {2,6},{8,10},{15,18}};
    sol.merge(v);
    fora(e , v)
    {
        fora(a ,e)
        {
            cout << a<< " ";
        }
        cout << endl;
        // cout << e << endl;
    }
    // cout << ans << endl;
    // // cout << endl;
   
}