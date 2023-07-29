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
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();
        int m = matrix[0].size();
        int high = (m*n)-1 , low = 0;
        while(high-low >1)
        {
            int mid = low + (high - low)/2;
            if(matrix[mid/m][mid%m]<=target)
                low = mid;
            else
                high = mid-1;
        }
        if(matrix[low/m][low%m]==target || matrix[high/m][high%m]==target )
            return true;
        return false;

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