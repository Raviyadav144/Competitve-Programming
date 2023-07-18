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
    vector<int> getRow(int rowIndex){
        // vector<vector<int>>pasTri(rowIndex+1 , vector<int>(rowIndex+2, 0));
        int pasTri[rowIndex+1][rowIndex+2];
        memset(pasTri, 0 , sizeof(pasTri));
        pasTri[0][1] = 1;
        for(int i = 1; i <= rowIndex ;++i)
        {
            for(int j = 1;  j <=i+2 ;++j)
            {
                pasTri[i][j] = pasTri[i-1][j] +pasTri[i-1][j-1];
            }
        }
        
        vector<int>v;
        for(int j =1 ; j <rowIndex+2 ;++j)
        {
            if(pasTri[rowIndex][j]!=0)
                v.push_back(pasTri[rowIndex][j]);
        }
        // fora(e,v)
        // cout << e << endl;  
        return v;
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
    vector<int> ans  = sol.getRow(n);
    fora(e , ans)
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