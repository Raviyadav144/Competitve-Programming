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
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>pasTri(numRows , vector<int>(numRows+1, 0));
        pasTri[0][1] = 1;
        for(int i = 1; i < numRows ;++i)
        {
            for(int j = 1;  j <=i+1 ;++j)
            {
                pasTri[i][j] = pasTri[i-1][j] +pasTri[i-1][j-1];
            }
        }
        // return pasTri;
        vector<vector<int>>ans;
        for(int i = 0  ; i < numRows; ++i)
        {
            vector<int>v;
            for(int j =1 ; j <numRows+1 ;++j)
            {
                if(pasTri[i][j]!=0)
                    v.push_back(pasTri[i][j]);
            }
            ans.push_back(v);
        }
        return ans;
    }
};
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    // vector input
    vector<int>v;
    int n;
    cin>> n;


    Solution sol;
    vector<vector<int>> ans  = sol.generate(n);
    fora(e , ans)
    {
        fora(v ,e)
        {
            cout << v << " ";
        }
        cout << endl;
        // cout << e << endl;
    }
    // cout << ans << endl;
    // // cout << endl;
   
}