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
    int maximumXOR(vector<int>& nums) {
        vector<bool> bits(32 , false);

        // cout  << maxi << endl;
        for(int i = 0 ; i < nums.size();++i)
        {
            int maxi = nums[i];
            for(int j = 0 ; j <16;++j)
            {
                if(maxi & 1)
                {
                    bits[j] = true;
                }
                maxi >>=1;
            }
        }
        ll ans = 0 ;
        for(int i = 0 ; i<16;++i)
        {
            if(bits[i])
                ans+=(1 << i);
        }
        // cout << ind << endl;
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
    while(n--)
    {
        int a;
        cin >> a;
        v.push_back(a);
    }

    // const input
    // string first , goal;
    // cin >> first >> goal;
    // int a , b ,c ;
    // cin >> a >> b >> c;
    // cout << a << b << c;

    // single output
    // Solution sol;
    // int ans  = sol.getMaximumXor(v , m);
    // cout << ans << endl;

    // Vector output
    Solution sol;
    int ans  = sol.maximumXOR(v);
    // fora(e , ans)
    // {
    //     // fora(v ,e)
    //     // {
    //     //     cout << v << " ";
    //     // }
    //     cout << e << endl;
    // }
    cout << ans << endl;
    // // cout << endl;
   
}