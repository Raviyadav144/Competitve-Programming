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
    vector<int> filter(int num , int n , vector<int> &v)
    {
        vector<int>ans;
        int j = 0 ;
        for(int i = 0; i<= n ;++i)
        // while( num > 0)
        {   
             if(num & 1)
             {
                 ans.push_back(v[i]);
             }
             num >>=1;
             ++j;
        }
        return ans;
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans;
        int n = nums.size();
        for(int i = 0 ; i < (1 <<n) ; ++i)
        {
            vector<int> val = filter(i , n , nums);
            ans.push_back(val);
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
    vector<vector<int>> ans = sol.subsets(v);
    fora(e , ans)
    {
        fora(v ,e)
        {
            cout << v << " ";
        }
        cout << endl;
    }
    // cout << ans << endl;
    // cout << endl;
   
}