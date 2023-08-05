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
    void findComb(vector<int>& candidates, int target, int sum, int i , int n, vector<vector<int>>&v, vector<int>&ans)
    {
        if(sum>=target || i>n)
        {
            if(sum == target)
            {
                v.push_back(ans);
                return;
            }
               
            else return;
        }
        ans.push_back(candidates[i]);
        sum+=candidates[i];
        findComb(candidates, target, sum , i , n, v, ans );
        sum-=candidates[i];
        ans.pop_back();
        findComb(candidates , target, sum , i+1 , n, v, ans);
        
        
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        set<vector<int>>s;
        vector<int>ans;
        vector<vector<int>>v;
        findComb(candidates, target, 0 , 0, candidates.size()-1, v, ans);
        
        // for(auto &e: s)
        // {
        //     v.push_back(e);
        // }
        return v;
    }
};
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    // vector<int>v;
    // int n;
    // cin>> n;


    
    fora(e , v)
    {
        // fora(a ,e)
        // {
        //     cout << a<< " ";
        // }
        // cout << endl;
        cout << e << endl;
    }
    // cout << ans << endl;
    // // cout << endl;
   
}