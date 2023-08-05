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
void findComb(vector<int>&v , int i, int target , vector<int>&comb, vector<vector<int>>&ans, int n)
{
    if(i==n)
    {
        if(target == 0)
        {
            ans.push_back(comb);
            return;
        }
        else
        return ;
    }
        
        for(int j = i ;j < n ; ++j)
        {
            if(j > i &&  v[j]==v[j-1])
            continue;
             comb.push_back(v[i]);
        target-=v[i];
        findComb(v,i+1,target,comb, ans, n);
        comb.pop_back();
        }
       
    //     target+=v[i];
    //     comb.pop_back();
    
    // findComb(v, i+1,target, comb, ans, n);
}
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>comb;
        sort(candidates.begin() , candidates.end());
        findComb(candidates , 0 , target , comb, ans, candidates.size());
        return ans;
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