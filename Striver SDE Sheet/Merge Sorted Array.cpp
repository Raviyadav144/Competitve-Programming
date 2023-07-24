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
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {

       int ind = m;
        for(int i = 0 ; i < n;++i)
        {
            nums1[ind] = nums2[i];
            ++ind;
        }
       int gap = ceil((n+m)/2);
       while(gap>=1)
       {
           int left = 0, right = left+gap;
           while(right < (n+m))
           {
               if(nums1[left] > nums1[right])
               {
                   swap(nums1[left] , nums1[right]);
               }
               ++left , ++right;
           }
           gap = ceil(gap/2);
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