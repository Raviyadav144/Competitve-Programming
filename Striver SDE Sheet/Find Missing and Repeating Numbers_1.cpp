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
    pair<int,int> missingAndRepeating(vector<int> &arr, int n)
        {
            long long nsum = n *(n+1) * 1/2;
            long long val = 0;
            for(int i = 0 ; i < n;++i)
            {
                val+=arr[i];
            }
            long long xydiff = (nsum - val);
            long long sqsum = (n)*(n+1)*(2*n +1 )*1/6;

            long long sqval = 0;
            for(int i = 0 ; i < n;++i)
            {
                sqval+=(pow(arr[i],2));
            }
            long long eq2 = ((sqsum - sqval))/xydiff;
            long long ans = (eq2+ xydiff)/2;
            // cout << ans - xydiff << " "<<  ans << endl;
            return {ans , ans - xydiff};

            
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