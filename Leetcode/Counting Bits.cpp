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
    vector<int> countBits(int n) {
        vector<int>ans(n+1 , 0);
        for(int i =0 ; i<=n;++i)
        {
            
            int val = i;
            while(val > 0)
            {
                val &=(val-1);
                ++ans[i];
            }
           
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
    // while(n--)
    // {
    //     int a;
    //     cin >> a;
    //     v.push_back(a);
    // }
    // string first , goal;
    // cin >> first >> goal;
    // int a , b ,c ;
    // cin >> a >> b >> c;
    // cout << a << b << c;
    Solution sol;;
    vector<int>ans = sol.countBits(n);
    fora(e , ans)
    {
        // fora(v ,e)
        // {
        //     cout << v << " ";
        // }
        cout << e << endl;
    }
    // cout << ans << endl;
    // cout << endl;
   
}