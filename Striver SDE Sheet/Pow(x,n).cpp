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
    double myPow(double x, int n) {
        double res = 1;
        bool sign = (n < 0 ? true : false);
        n = abs(n);
        while(n  > 0)
        {
            if(n & 1)
                res *= x;
            x*=x;
            n>>=1;
        }
        return (sign ? 1/res : res);
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