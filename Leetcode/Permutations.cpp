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
    
    void permutation(vector<int>&v  , vector<int>&temp , vector<bool>&picked, vector<vector<int>>&ans)
    {
        if(temp.size()==v.size())
        {
            ans.push_back(temp);
            return;
        }
        
            
            for(int j = 0 ; j < v.size();++j)
            {
                if(!picked[j])
                {
                    picked[j] = true;
                    temp.push_back(v[j]);
                    permutation(v, temp ,picked, ans);
                    picked[j] = false;
                    temp.pop_back();
                }
            }
        
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>v;
        vector<int>v1;
        vector<bool>check(nums.size());
        permutation(nums, v1, check, v);
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